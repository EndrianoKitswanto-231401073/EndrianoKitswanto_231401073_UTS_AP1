#include <iostream>
using namespace std;

int main(){
    int i,jumlah=0;
    string angka;
    cout << "Masukkan Angka : ";
    cin >> angka;
    for (i = 0; i < angka.length(); i++){
        switch (angka[i]) {
            case '2':
                jumlah += 2;
                break;
            case '3':
                jumlah += 3;
                break;
            case '5':
                jumlah += 5;
                break;
            case '7':
                jumlah += 7;
                break;
        }
    }
    cout << "Jumlah Angka Prima yang diinput : " << jumlah;
    return 0;
}