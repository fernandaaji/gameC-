#include <iostream>
#include <stdlib.h>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    string kata;
    char temp;
    int x, y, jumlah;
    cout << "Masukkan sebuah kata : "; cin >> kata;
    cout << "\nJumlah huruf dari " << kata << " adalah : ";
    cout << kata.size() << endl << endl;

    jumlah=kata.size();
    srand(static_cast<unsigned int>(time(0)));

    for(int a=jumlah; a>0 ; a--){
        x=rand() % jumlah;
        y=a-1;
        temp = kata[x];
        kata[x] = kata[y];
        kata[y] = temp;
    }
    cout << "Hasil acak kata : ";
    for(int i=0 ; i<jumlah ; i++){
        cout << kata[i];
    } cout << endl << endl;
    return 0;


}
