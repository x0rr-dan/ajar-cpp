// aplikasi pengurutan Aa dari terbesar ke terkecil tanpa tenarry
// code by me
// 
// creaed in heaven ;)
// 6 - 7 okt 23
#include <iostream>
using namespace std;

// kamus
int A, B, C, D, E;

void r(){               // functiuon buat bikin garis otomatis. males nambahin garis satu-satu mending pake function
    int i = 0;      // yaa ini variable i buat deklarasiin klo i itu 0
    while (i < 77) { // looping dari varaibel i ke 77
    cout << "-";    // - sampe 77x jadi kek garis
    i++;            // biar variabel i nambah jadi ga infinite loop
    }
    cout << endl;   // biar diakhir ada space yaa jarak lah intinya anggep aja \n
}

int main() {
    r(); // garis pake function biar cepet
    cout << "[*] \t    Program mengurutkan Angka dari terbesar ke terkecil v1\t  [*]" << endl; // judul aja si biar keren
    r(); // garis pake function biar cepet
    cout << "[*] Masukkan Angka pertama: "; // inputan buat masukin angka ke variable
    cin >> A;   // inputan buat masukin angka ke variable
    cout << "[*] Masukkan Angka kedua: ";   // inputan buat masukin angka ke variable
    cin >> B;   // inputan buat masukin angka ke variable
    cout << "[*] Masukkan Angka ketiga: ";  // inputan buat masukin angka ke variable
    cin >> C;   // inputan buat masukin angka ke variable
    cout << "[*] Masukkan Angka keempat: "; // inputan buat masukin angka ke variable
    cin >> D;   // inputan buat masukin angka ke variable
    cout << "[*] Masukkan Angka kelima: ";  // inputan buat masukin angka ke variable
    cin >> E;
    r(); // garis pake function biar cepet

    cout << "[*] Urutan Terbesar ";
    if (A >= B && A >= C && A >= D && A >= E) { // ngebandingin A ke semua varibale angka
        cout << " " << A;       // kalo A paling gede dia ngeoutput
        if (B >= C && B >= D && B >= E) {
            cout  << " " << B;      // kalo B paling gede ke 2 dia ngeoutput
            if (C >= D && C >= E) {
                cout << " " << C;   // kalo C paling gede ke 3 dia ngeoutput
                if (D >= E) {
                    cout << " " << D; // ngebandingin buat ke 4
                    cout << " " << E;
                } else {
                    cout << " " << E; // ngebandingin buat ke 5
                    cout << " " << D;
                }
            } else if (D >= C && D >= E) {  // kalo D lebih gede dari C
                cout << " " << D;
                if (C >= E) {
                    cout << " " << C;
                    cout << " " << E;
                } else {
                    cout << " " << E;
                    cout << " " << C;
                }
            } else {
                cout << " " << E;       // kalo E paling gede dari semuanya
                if (C >= D) {
                    cout << " " << C;
                    cout << " " << D;
                } else {
                    cout << " " << D;
                    cout << " " << C;
                }
            }
        } else if (C >= B && C >= D && C >= E) { // kalo C lebih gede dari B buat urutan ke 2
            cout  << " " << C;
            if (B >= D && B >= E) {
                cout << " " << B;
                if (D >= E) {
                    cout << " " << D;
                    cout << " " << E;
                } else {
                    cout << " " << E;
                    cout << " " << D;
                }
            } else if (D >= B && D >= E) {
                cout << " " << D;
                if (B >= E) {
                    cout << " " << B;
                    cout << " " << E;
                } else {
                    cout << " " << E;
                    cout << " " << B;
                }
            } else {
                cout << " " << E;
                if (B >= D) {
                    cout << " " << B;
                    cout << " " << D;
                } else {
                    cout << " " << D;
                    cout << " " << B;
                }
            }
        } else if (D >= B && D >= C && D >= E) {
            cout  << " " << D;
            if (B >= C && B >= E) {
                cout << " " << B;
                if (C >= E) {
                    cout << " " << C;
                    cout << " " << E;
                } else {
                    cout << " " << E;
                    cout << " " << C;
                }
            } else if (C >= B && C >= E) {
                cout << " " << C;
                if (B >= E) {
                    cout << " " << B;
                    cout << " " << E;
                } else {
                    cout << " " << E;
                    cout << " " << B;
                }
            } else {
                cout << " " << E;
                if (B >= C) {
                    cout << " " << B;
                    cout << " " << C;
                } else {
                    cout << " " << C;
                    cout << " " << B;
                }
            }
        } else {
            cout  << " " << E;
            if (B >= C && B >= D) {
                cout << " " << B;
                if (C >= D) {
                    cout << " " << C;
                    cout << " " << D;
                } else {
                    cout << " " << D;
                    cout << " " << C;
                }
            } else if (C >= B && C >= D) {
                cout << " " << C;
                if (B >= D) {
                    cout << " " << B;
                    cout << " " << D;
                } else {
                    cout << " " << D;
                    cout << " " << B;
                }
            } else {
                cout << " " << D;
                if (B >= C) {
                    cout << " " << B;
                    cout << " " << C;
                } else {
                    cout << " " << C;
                    cout << " " << B;
                }
            }
        }
    } else if (B >= A && B >= C && B >= D && B >= E) { // B paling gede
        cout << " " << B;
        if (A >= C && A >= D && A >= E) {
            cout  << " " << A;
            if (C >= D && C >= E) {
                cout << " " << C;
                if (D >= E) {
                    cout << " " << D;
                    cout << " " << E;
                } else {
                    cout << " " << E;
                    cout << " " << D;
                }
            } else if (D >= C && D >= E) {
                cout << " " << D;
                if (C >= E) {
                    cout << " " << C;
                    cout << " " << E;
                } else {
                    cout << " " << E;
                    cout << " " << C;
                }
            } else {
                cout << " " << E;
                if (C >= D) {
                    cout << " " << C;
                    cout << " " << D;
                } else {
                    cout << " " << D;
                    cout << " " << C;
                }
            }
        } else if (C >= A && C >= D && C >= E) {
            cout  << " " << C;
            if (A >= D && A >= E) {
                cout << " " << A;
                if (D >= E) {
                    cout << " " << D;
                    cout << " " << E;
                } else {
                    cout << " " << E;
                    cout << " " << D;
                }
            } else if (D >= A && D >= E) {
                cout << " " << D;
                if (A >= E) {
                    cout << " " << A;
                    cout << " " << E;
                } else {
                    cout << " " << E;
                    cout << " " << A;
                }
            } else {
                cout << " " << E;
                if (A >= D) {
                    cout << " " << A;
                    cout << " " << D;
                } else {
                    cout << " " << D;
                    cout << " " << A;
                }
            }
        } else if (D >= A && D >= C && D >= E) {
            cout  << " " << D;
            if (A >= C && A >= E) {
                cout << " " << A;
                if (C >= E) {
                    cout << " " << C;
                    cout << " " << E;
                } else {
                    cout << " " << E;
                    cout << " " << C;
                }
            } else if (C >= A && C >= E) {
                cout << " " << C;
                if (A >= E) {
                    cout << " " << A;
                    cout << " " << E;
                } else {
                    cout << " " << E;
                    cout << " " << A;
                }
            } else {
                cout << " " << E;
                if (A >= C) {
                    cout << " " << A;
                    cout << " " << C;
                } else {
                    cout << " " << C;
                    cout << " " << A;
                }
            }
        } else {
            cout  << " " << E;
            if (A >= C && A >= D) {
                cout << " " << A;
                if (C >= D) {
                    cout << " " << C;
                    cout << " " << D;
                } else {
                    cout << " " << D;
                    cout << " " << C;
                }
            } else if (C >= A && C >= D) {
                cout << " " << C;
                if (A >= D) {
                    cout << " " << A;
                    cout << " " << D;
                } else {
                    cout << " " << D;
                    cout << " " << A;
                }
            } else {
                cout << " " << D;
                if (A >= C) {
                    cout << " " << A;
                    cout << " " << C;
                } else {
                    cout << " " << C;
                    cout << " " << A;
                }
            }
        }
    } else if (C >= A && C >= B && C >= D && C >= E) { // C paling gede
        cout << " " << C;
        if (A >= B && A >= D && A >= E) {
            cout  << " " << A;
            if (B >= D && B >= E) {
                cout << " " << B;
                if (D >= E) {
                    cout << " " << D;
                    cout << " " << E;
                } else {
                    cout << " " << E;
                    cout << " " << D;
                }
            } else if (D >= B && D >= E) {
                cout << " " << D;
                if (B >= E) {
                    cout << " " << B;
                    cout << " " << E;
                } else {
                    cout << " " << E;
                    cout << " " << B;
                }
            } else {
                cout << " " << E;
                if (B >= D) {
                    cout << " " << B;
                    cout << " " << D;
                } else {
                    cout << " " << D;
                    cout << " " << B;
                }
            }
        } else if (B >= A && B >= D && B >= E) {
            cout  << " " << B;
            if (A >= D && A >= E) {
                cout << " " << A;
                if (D >= E) {
                    cout << " " << D;
                    cout << " " << E;
                } else {
                    cout << " " << E;
                    cout << " " << D;
                }
            } else if (D >= A && D >= E) {
                cout << " " << D;
                if (A >= E) {
                    cout << " " << A;
                    cout << " " << E;
                } else {
                    cout << " " << E;
                    cout << " " << A;
                }
            } else {
                cout << " " << E;
                if (A >= D) {
                    cout << " " << A;
                    cout << " " << D;
                } else {
                    cout << " " << D;
                    cout << " " << A;
                }
            }
        } else if (D >= A && D >= B && D >= E) {
            cout  << " " << D;
            if (A >= B && A >= E) {
                cout << " " << A;
                if (B >= E) {
                    cout << " " << B;
                    cout << " " << E;
                } else {
                    cout << " " << E;
                    cout << " " << B;
                }
            } else if (B >= A && B >= E) {
                cout << " " << B;
                if (A >= E) {
                    cout << " " << A;
                    cout << " " << E;
                } else {
                    cout << " " << E;
                    cout << " " << A;
                }
            } else {
                cout << " " << E;
                if (A >= B) {
                    cout << " " << A;
                    cout << " " << B;
                } else {
                    cout << " " << B;
                    cout << " " << A;
                }
            }
        } else {
            cout  << " " << E;
            if (A >= B && A >= D) {
                cout << " " << A;
                if (B >= D) {
                    cout << " " << B;
                    cout << " " << D;
                } else {
                    cout << " " << D;
                    cout << " " << B;
                }
            } else if (B >= A && B >= D) {
                cout << " " << B;
                if (A >= D) {
                    cout << " " << A;
                    cout << " " << D;
                } else {
                    cout << " " << D;
                    cout << " " << A;
                }
            } else {
                cout << " " << D;
                if (A >= B) {
                    cout << " " << A;
                    cout << " " << B;
                } else {
                    cout << " " << B;
                    cout << " " << A;
                }
            }
        }
    } else if (D >= A && D >= B && D >= C && D >= E) {      // D paling gede
        cout << " " << D;
        if (A >= B && A >= C && A >= E) {
            cout  << " " << A;
            if (B >= C && B >= E) {
                cout << " " << B;
                if (C >= E) {
                    cout << " " << C;
                    cout << " " << E;
                } else {
                    cout << " " << E;
                    cout << " " << C;
                }
            } else if (C >= B && C >= E) {
                cout << " " << C;
                if (B >= E) {
                    cout << " " << B;
                    cout << " " << E;
                } else {
                    cout << " " << E;
                    cout << " " << B;
                }
            } else {
                cout << " " << E;
                if (B >= C) {
                    cout << " " << B;
                    cout << " " << C;
                } else {
                    cout << " " << C;
                    cout << " " << B;
                }
            }
        } else if (B >= A && B >= C && B >= E) {
            cout  << " " << B;
            if (A >= C && A >= E) {
                cout << " " << A;
                if (C >= E) {
                    cout << " " << C;
                    cout << " " << E;
                } else {
                    cout << " " << E;
                    cout << " " << C;
                }
            } else if (C >= A && C >= E) {
                cout << " " << C;
                if (A >= E) {
                    cout << " " << A;
                    cout << " " << E;
                } else {
                    cout << " " << E;
                    cout << " " << A;
                }
            } else {
                cout << " " << E;
                if (A >= C) {
                    cout << " " << A;
                    cout << " " << C;
                } else {
                    cout << " " << C;
                    cout << " " << A;
                }
            }
        } else if (C >= A && C >= B && C >= E) {
            cout  << " " << C;
            if (A >= B && A >= E) {
                cout << " " << A;
                if (B >= E) {
                    cout << " " << B;
                    cout << " " << E;
                } else {
                    cout << " " << E;
                    cout << " " << B;
                }
            } else if (B >= A && B >= E) {
                cout << " " << B;
                if (A >= E) {
                    cout << " " << A;
                    cout << " " << E;
                } else {
                    cout << " " << E;
                    cout << " " << A;
                }
            } else {
                cout << " " << E;
                if (A >= B) {
                    cout << " " << A;
                    cout << " " << B;
                } else {
                    cout << " " << B;
                    cout << " " << A;
                }
            }
        } else {
            cout  << " " << E;
            if (A >= B && A >= C) {
                cout << " " << A;
                if (B >= C) {
                    cout << " " << B;
                    cout << " " << C;
                } else {
                    cout << " " << C;
                    cout << " " << B;
                }
            } else if (B >= A && B >= C) {
                cout << " " << B;
                if (A >= C) {
                    cout << " " << A;
                    cout << " " << C;
                } else {
                    cout << " " << C;
                    cout << " " << A;
                }
            } else {
                cout << " " << C;
                if (A >= B) {
                    cout << " " << A;
                    cout << " " << B;
                } else {
                    cout << " " << B;
                    cout << " " << A;
                }
            }
        }
    } else {            // E paling gede
        cout << " " << E;
        if (A >= B && A >= C && A >= D) {
            cout  << " " << A;
            if (B >= C && B >= D) {
                cout << " " << B;
                if (C >= D) {
                    cout << " " << C;
                    cout << " " << D;
                } else {
                    cout << " " << D;
                    cout << " " << C;
                }
            } else if (C >= B && C >= D) {
                cout << " " << C;
                if (B >= D) {
                    cout << " " << B;
                    cout << " " << D;
                } else {
                    cout << " " << D;
                    cout << " " << B;
                }
            } else {
                cout << " " << D;
                if (B >= C) {
                    cout << " " << B;
                    cout << " " << C;
                } else {
                    cout << " " << C;
                    cout << " " << B;
                }
            }
        } else if (B >= A && B >= C && B >= D) {
            cout  << " " << B;
            if (A >= C && A >= D) {
                cout << " " << A;
                if (C >= D) {
                    cout << " " << C;
                    cout << " " << D;
                } else {
                    cout << " " << D;
                    cout << " " << C;
                }
            } else if (C >= A && C >= D) {
                cout << " " << C;
                if (A >= D) {
                    cout << " " << A;
                    cout << " " << D;
                } else {
                    cout << " " << D;
                    cout << " " << A;
                }
            } else {
                cout << " " << D;
                if (A >= C) {
                    cout << " " << A;
                    cout << " " << C;
                } else {
                    cout << " " << C;
                    cout << " " << A;
                }
            }
        } else {
            cout  << " " << D;
            if (A >= B && A >= C) {
                cout << " " << A;
                if (B >= C) {
                    cout << " " << B;
                    cout << " " << C;
                } else {
                    cout << " " << C;
                    cout << " " << B;
                }
            } else if (B >= A && B >= C) {
                cout << " " << B;
                if (A >= C) {
                    cout << " " << A;
                    cout << " " << C;
                } else {
                    cout << " " << C;
                    cout << " " << A;
                }
            } else {
                cout << " " << C;
                if (A >= B) {
                    cout << " " << A;
                    cout << " " << B;
                } else {
                    cout << " " << B;
                    cout << " " << A;
                }
            }
        }
    }

    return 0;
}
