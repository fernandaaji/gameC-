#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int kunci = 0;
    int tebakan = 0;
    int maks = 0;
    int nyawa = 3;
    srand(time(NULL));

    do{
        cout << "Masukkan maksimal nilai (0-100) : "; cin >> maks;
        if(maks<0||maks>100){
            cout << "Masukkan angka antara (0-100)" << endl;
            cout << endl;
        }
    }while(maks<0||maks>100);

    cout << "Silakan tebak nilai antara 0 sampai " << maks << endl;
    kunci = rand() % maks+1;
    cout << "(Cheat : ini adalah angka yang ditebak " << kunci << " )" << endl;

    do{
        cout << "Masukkan tebakan anda "; cin >> tebakan;
        if(tebakan < kunci){
            cout << "Tebakan anda terlalu kecil" << endl;
            nyawa --;
            cout << "Tebakan anda salah, nyawa : " << nyawa << endl << endl;
        }
        else if(tebakan>kunci){
            cout << "Tebakan anda terlalu besar" << endl;
            nyawa--;
            cout << "Tebakan anda salah, nyawa : " << nyawa << endl << endl;
        }
        else if(kunci==tebakan){
            cout << "Tebakan anda benar" << endl;
        }
        if(nyawa==0){
            cout << "GAME OVER" << endl;
        }
    } while(kunci!=tebakan && nyawa !=0);

    return 0;
}
