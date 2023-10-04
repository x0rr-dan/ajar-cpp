#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    cout << "Masukkan nilai A: ";
    cin >> a;
    cout << "Masukkan nilai B: ";
    cin >> b;
    cout << "Masukkan nilai C: ";
    cin >> c;
    cout << "Masukkan nilai D: ";
    cin >> d;
    cout << "Masukkan nilai E: ";
    cin >> e;

    cout << "Urutan dari yang terbesar adalah: ";

    if (a >= b) {
        if (a >= c) {
            if (a >= d) {
                if (a >= e) {
                    cout << a << " ";
                    if (b >= c) {
                        if (b >= d) {
                            if (b >= e) {
                                if (c >= d) {
                                    if (c >= e) {
                                        if (d >= e) {
                                            cout << b << " " << c << " " << d << " " << e << endl;
                                        } else {
                                            cout << b << " " << c << " " << e << " " << d << endl;
                                        }
                                    } else {
                                        cout << b << " " << e << " " << c << " " << d << endl;
                                    }
                                } else {
                                    cout << e << " " << b << " " << c << " " << d << endl;
                                }
                            } else {
                                cout << e << " " << b << " " << c << " " << d << endl;
                            }
                        } else {
                            if (d >= e) {
                                cout << e << " " << b << " " << d << " " << c << endl;
                            } else {
                                cout << e << " " << b << " " << d << " " << c << endl;
                            }
                        }
                    } else {
                        if (c >= d) {
                            if (c >= e) {
                                if (d >= e) {
                                    cout << b << " " << c << " " << d << " " << e << endl;
                                } else {
                                    cout << b << " " << c << " " << e << " " << d << endl;
                                }
                            } else {
                                cout << b << " " << e << " " << c << " " << d << endl;
                            }
                        } else {
                            if (d >= e) {
                                cout << e << " " << c << " " << d << " " << b << endl;
                            } else {
                                cout << e << " " << c << " " << d << " " << b << endl;
                            }
                        }
                    }
                } else {
                    if (e >= d) {
                        cout << e << " " << a << " " << b << " " << c << " " << d << endl;
                    } else {
                        cout << e << " " << a << " " << b << " " << c << " " << d << endl;
                    }
                }
            } else {
                if (d >= e) {
                    if(a >= e){
                        cout << d << " " << a << " " << b << " " << c << " " << e << endl;
                    } else {
                        if(a >= b){
                            cout << d << " " << e << " " << a << " " << c << " " << b << endl;
                        } else {
                            cout << d << " " << e << " " << b << " " << c << " " << a << endl;
                        }
                    }
                } else {
                    cout << d << " " << a << " " << b << " " << c << " " << e << endl;
                }
            }
        } else {
            if (c >= d) {
                if (c >= e) {
                    if (d >= e) {
                        if( a>= d){
                            if( a >= e){
                                cout << c << " " << e << " " << b << " " << c << " " << a << endl;
                            } else{
                                if(a >= b){
                                    cout << c << " " << d << " " << e << " " << a << " " << b << endl;
                                } else{
                                    cout << c << " " << d << " " << e << " " << b << " " << a << endl;
                                }
                            }
                        } else{
                            if(a >= b){
                                cout << c << " " << d << " " << e << " " << a << " " << b << endl; 
                            } else{
                                cout << c << " " << d << " " << e << " " << b << " " << a << endl; 
                            }
                            // sampe sini
                        }
                        cout << c << " " << a << " " << b << " " << d << " " << e << endl;
                    } else {
                        cout << c << " " << a << " " << b << " " << e << " " << d << endl;
                    }
                } else {
                    cout << e << " " << c << " " << d << " " << a << " " << b << endl;
                }
            } else {
                if (d >= e) {
                    if(e >= a){
                        if(a >= b ){
                            if( b >= c){
                                cout << d << " " << e << " " << a << " " << b << " " << c << endl;

                                }else{
                                    cout << d << " " << e << " " << a << " " << c << " " << b << endl;
                                }
                            } else{
                                cout << d << " " << e << " " << b << " " << a << " " << c << endl;
                            }
                            //cout << d << " " << e << " " << a << " " << c << " " << e << endl;
                        }else{
                            cout << d << " " << e << " " << b << " " << a << " " << c << endl;
                        }
                        cout << d << " " << e << " " << b << " " << c << " " << a << endl;
                    }else{
                        cout << d << " " << a << " " << b << " " << c << " " << e << endl;
                } /*else {
                    cout << d << " " << a << " " << b << " " << c << " " << e << endl;
                }*/
            }
        }
    } else {
        if (b >= c) {
            if (b >= d) {
                if (b >= e) {
                    cout << b << " ";
                    if (c >= d) {
                        if (c >= e) {
                            if (d >= e) {
                                cout << a << " " << c << " " << d << " " << e << endl;
                            } else {
                                cout << a << " " << c << " " << e << " " << d << endl;
                            }
                        } else {
                            cout << a << " " << e << " " << c << " " << d << endl;
                        }
                    } else {
                        if (d >= e) {
                            cout << a << " " << c << " " << d << " " << b << endl;
                        } else {
                            cout << a << " " << c << " " << e << " " << b << endl;
                        }
                    }
                } else {
                    if (e >= d) {
                        cout << e << " " << a << " " << b << " " << c << " " << d << endl;
                    } else {
                        cout << e << " " << a << " " << b << " " << c << " " << d << endl;
                    }
                }
            } else {
                if (d >= e) {
                    cout << d << " " << a << " " << b << " " << c << " " << e << endl;
                } else {
                    cout << d << " " << a << " " << b << " " << c << " " << e << endl;
                }
            }
        } else {
            if (c >= d) {
                if (c >= e) {
                    cout << c << " ";
                    if (d >= e) {
                        cout << d << " " << e << " " << b << " " << a << endl;
                    } else {
                        cout << e << " " << d << " " << b << " " << a << endl;
                    }
                } else {
                    if (e >= d) {
                        cout << e << " " << a << " " << b << " " << c << " " << d << endl;
                    } else {
                        cout << e << " " << a << " " << b << " " << c << " " << d << endl;
                    }
                }
            } else {
                if (d >= e) {
                    cout << d << " " << e << " " << c << " " << b << " " << a << endl;
                } else {
                    cout << d << " " << a << " " << b << " " << c << " " << e << endl;
                }
            }
        }
    }

    return 0;
}
