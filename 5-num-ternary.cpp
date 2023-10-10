// aplikasi pengurutan angka dari terbesar ke terkecil dengan tenarry
// code by me
// 
// creaed in heaven ;)
// 7 okt 23
#include <iostream>
using namespace std;

// kamus
int A, B, C, D, E; // deklarasi nama variable



void r(){               // functiuon buat bikin garis otomatis. males nambahin garis satu-satu mending pake function
        int i = 0;      // yaa ini variable i buat deklarasiin klo i itu 0
        while (i < 77) { // looping dari varaibel i ke 77
        cout << "-";    // - sampe 77x jadi kek garis
        i++;            // biar variabel i nambah jadi ga infinite loop
        }
        cout << endl;   // biar diakhir ada space yaa jarak lah intinya anggep aja \n
}

// deskripsi
int main() {
    r(); // garis pake function biar cepet 
    cout << "[*] \t     Program mengurutkan angka dari terbesar ke terkecil \t  [*]" << endl; // banner aja si biar keren
    r(); // garis pake function biar cepet
    cout << "[*] Masukkan Angka ke 1: "; // inputan buat masukin angka ke variable
    cin >> A; // inputan buat masukin angka ke variable
    cout << "[*] Masukkan Angka ke 2: "; // inputan buat masukin angka ke variable
    cin >> B; // inputan buat masukin angka ke variable
    cout << "[*] Masukkan Angka ke 3: "; // inputan buat masukin angka ke variable
    cin >> C; // inputan buat masukin angka ke variable
    cout << "[*] Masukkan Angka ke 4: "; // inputan buat masukin angka ke variable
    cin >> D; // inputan buat masukin angka ke variable
    cout << "[*] Masukkan Angka ke 5: "; // inputan buat masukin angka ke variable
    cin >> E; // inputan buat masukin angka ke variable

    if (A >= B && A >= C && A >= D && A >= E) {     // A
        if (B >= C && B >= D && B >= E) {
            r(); // garis pake function biar cepet
            cout << "[*] Urutan dari yg terbesar adalah: " << A << " " << B << " " << (C >= D && C >= E ? C : D >= E ? D : E) << " " << (C >= D && C >= E ? (D >= E ? D : E) : D >= E ? E : D) << " " << (C >= D && C >= E ? (D >= E ? E : D) : C >= E ? E : C) << endl; // pake ternary operator biar ez, example ternary = (condition ? expression_if_true : expression_if_false) baca dari https://www.w3schools.com/cpp/cpp_conditions_shorthand.asp
        } else if (C >= B && C >= D && C >= E) {
            r(); // garis pake function biar cepet
            cout << "[*] Urutan dari yg terbesar adalah: " << A << " " << C << " " << (B >= D && B >= E ? B : D >= E ? D : E) << " " << (B >= D && B >= E ? (D >= E ? D : E) : D >= E ? E : D) << " " << (B >= D && B >= E ? (D >= E ? E : D) : B >= E ? E : B) << endl;
        } else if (D >= B && D >= C && D >= E) {
            r(); // garis pake function biar cepet
            cout << "[*] Urutan dari yg terbesar adalah: " << A << " " << D << " " << (B >= C && B >= E ? B : C >= E ? C : E) << " " << (B >= C && B >= E ? (C >= E ? C : E) : C >= E ? E : C) << " " << (B >= C && B >= E ? (C >= E ? E : C) : B >= E ? E : B) << endl;
        } else {
            r(); // garis pake function biar cepet
            cout << "[*] Urutan dari yg terbesar adalah: " << A << " " << E << " " << (B >= C && B >= D ? B : C >= D ? C : D) << " " << (B >= C && B >= D ? (C >= D ? C : D) : C >= D ? D : C) << " " << (B >= C && B >= D ? (C >= D ? D : C) : B >= D ? D : B) << endl;
        }
    } else if (B >= A && B >= C && B >= D && B >= E) {      // B
        if (A >= C && A >= D && A >= E) {
            r(); // garis pake function biar cepet
            cout << "[*] Urutan dari yg terbesar adalah: " << B << " " << A << " " << (C >= D && C >= E ? C : D >= E ? D : E) << " " << (C >= D && C >= E ? (D >= E ? D : E) : D >= E ? E : D) << " " << (C >= D && C >= E ? (D >= E ? E : D) : C >= E ? E : C) << endl;
        } else if (C >= A && C >= D && C >= E) {
            r(); // garis pake function biar cepet
            cout << "[*] Urutan dari yg terbesar adalah: " << B << " " << C << " " << (A >= D && A >= E ? A : D >= E ? D : E) << " " << (A >= D && A >= E ? (D >= E ? D : E) : D >= E ? E : D) << " " << (A >= D && A >= E ? (D >= E ? E : D) : A >= E ? E : A) << endl;
        } else if (D >= A && D >= C && D >= E) {
            r(); // garis pake function biar cepet
            cout << "[*] Urutan dari yg terbesar adalah: " << B << " " << D << " " << (A >= C && A >= E ? A : C >= E ? C : E) << " " << (A >= C && A >= E ? (C >= E ? C : E) : C >= E ? E : C) << " " << (A >= C && A >= E ? (C >= E ? E : C) : A >= E ? E : A) << endl;
        } else {
            r(); // garis pake function biar cepet
            cout << "[*] Urutan dari yg terbesar adalah: " << B << " " << E << " " << (A >= C && A >= D ? A : C >= D ? C : D) << " " << (A >= C && A >= D ? (C >= D ? C : D) : C >= D ? D : C) << " " << (A >= C && A >= D ? (C >= D ? D : C) : A >= D ? D : A) << endl;
        }
    } else if (C >= A && C >= B && C >= D && C >= E) {      // C
        if (A >= B && A >= D && A >= E) {
            r(); // garis pake function biar cepet
            cout << "[*] Urutan dari yg terbesar adalah: " << C << " " << A << " " << (B >= D && B >= E ? B : D >= E ? D : E) << " " << (B >= D && B >= E ? (D >= E ? D : E) : D >= E ? E : D) << " " << (B >= D && B >= E ? (D >= E ? E : D) : B >= E ? E : B) << endl;
        } else if (B >= A && B >= D && B >= E) {
            r(); // garis pake function biar cepet
            cout << "[*] Urutan dari yg terbesar adalah: " << C << " " << B << " " << (A >= D && A >= E ? A : D >= E ? D : E) << " " << (A >= D && A >= E ? (D >= E ? D : E) : D >= E ? E : D) << " " << (A >= D && A >= E ? (D >= E ? E : D) : A >= E ? E : A) << endl;
        } else if (D >= A && D >= B && D >= E) {
            r(); // garis pake function biar cepet
            cout << "[*] Urutan dari yg terbesar adalah: " << C << " " << D << " " << (A >= B && A >= E ? A : B >= E ? B : E) << " " << (A >= B && A >= E ? (B >= E ? B : E) : B >= E ? E : B) << " " << (A >= B && A >= E ? (B >= E ? E : B) : A >= E ? E : A) << endl;
        } else {
            r(); // garis pake function biar cepet
            cout << "[*] Urutan dari yg terbesar adalah: " << C << " " << E << " " << (A >= B && A >= D ? A : B >= D ? B : D) << " " << (A >= B && A >= D ? (B >= D ? B : D) : B >= D ? D : B) << " " << (A >= B && A >= D ? (B >= D ? D : B) : A >= D ? D : A) << endl;
        }
    } else if (D >= A && D >= B && D >= C && D >= E) {      // D
        if (A >= B && A >= C && A >= E) {
            r(); // garis pake function biar cepet
            cout << "[*] Urutan dari yg terbesar adalah: " << D << " " << A << " " << (B >= C && B >= E ? B : C >= E ? C : E) << " " << (B >= C && B >= E ? (C >= E ? C : E) : C >= E ? E : C) << " " << (B >= C && B >= E ? (C >= E ? E : C) : B >= E ? E : B) << endl;
        } else if (B >= A && B >= C && B >= E) {
            r(); // garis pake function biar cepet
            cout << "[*] Urutan dari yg terbesar adalah: " << D << " " << B << " " << (A >= C && A >= E ? A : C >= E ? C : E) << " " << (A >= C && A >= E ? (C >= E ? C : E) : C >= E ? E : C) << " " << (A >= C && A >= E ? (C >= E ? E : C) : A >= E ? E : A) << endl;
        } else if (C >= A && C >= B && C >= E) {
            r(); // garis pake function biar cepet
            cout << "[*] Urutan dari yg terbesar adalah: " << D << " " << C << " " << (A >= B && A >= E ? A : B >= E ? B : E) << " " << (A >= B && A >= E ? (B >= E ? B : E) : B >= E ? E : B) << " " << (A >= B && A >= E ? (B >= E ? E : B) : A >= E ? E : A) << endl;
        } else {
            r(); // garis pake function biar cepet
            cout << "[*] Urutan dari yg terbesar adalah: " << D << " " << E << " " << (A >= B && A >= C ? A : B >= C ? B : C) << " " << (A >= B && A >= C ? (B >= C ? B : C) : B >= C ? C : B) << " " << (A >= B && A >= C ? (B >= C ? C : B) : A >= C ? C : A) << endl;
        }
    } else {                                                // E
        if (A >= B && A >= C && A >= D) {
            r(); // garis pake function biar cepet
            cout << "[*] Urutan dari yg terbesar adalah: " << E << " " << A << " " << (B >= C && B >= D ? B : C >= D ? C : D) << " " << (B >= C && B >= D ? (C >= D ? C : D) : C >= D ? D : C) << " " << (B >= C && B >= D ? (C >= D ? D : C) : B >= D ? D : B) << endl;
        } else if (B >= A && B >= C && B >= D) {
            r(); // garis pake function biar cepet
            cout << "[*] Urutan dari yg terbesar adalah: " << E << " " << B << " " << (A >= C && A >= D ? A : C >= D ? C : D) << " " << (A >= C && A >= D ? (C >= D ? C : D) : C >= D ? D : C) << " " << (A >= C && A >= D ? (C >= D ? D : C) : A >= D ? D : A) << endl;
        } else if (C >= A && C >= B && C >= D) {
            r(); // garis pake function biar cepet
            cout << "[*] Urutan dari yg terbesar adalah: " << E << " " << C << " " << (A >= B && A >= D ? A : B >= D ? B : D) << " " << (A >= B && A >= D ? (B >= D ? B : D) : B >= D ? D : B) << " " << (A >= B && A >= D ? (B >= D ? D : B) : A >= D ? D : A) << endl;
        } else {
            r(); // garis pake function biar cepet
            cout << "[*] Urutan dari yg terbesar adalah: " << E << " " << D << " " << (A >= B && A >= C ? A : B >= C ? B : C) << " " << (A >= B && A >= C ? (B >= C ? B : C) : B >= C ? C : B) << " " << (A >= B && A >= C ? (B >= C ? C : B) : A >= C ? C : A) << endl;
        }
    }

    return 0;
}