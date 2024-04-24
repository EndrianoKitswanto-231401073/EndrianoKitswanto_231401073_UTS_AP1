#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int jam, menit, detik;
    Awal:
        cout << "Masukkan Waktu (dalam Detik) : ";
        cin >> detik;
        if (detik < 0 ){
            cout << "Waktu Tidak bole Minus" << endl;
            goto Awal;
        }
    jam = 0;
    menit = 0;

    Jam:
        if (detik >= 3600){
            detik -= 3600;
            jam += 1;
            goto Jam;
        }
    Menit:
        if (detik >= 60){
            detik -= 60;
            menit += 1;
            goto Menit;
        }
    cout << "Waktu Yang anda Input adalah : "<< setw(2) << setfill('0') << jam << ":" << setw(2) << setfill('0') << menit << ":" << setw(2) << setfill('0') << detik;
    return 0;
}