#include <iostream>

using namespace std;

int main()
{
    string item = "";
    string item_sblm = "";
    string item_terhebat = "";
    string item_terlemah = "";
    char ulang = 'y';
    int stat = 0;
    int stat_terhebat = 0;
    int stat_terlemah = 100000;
    bool item_pertama = true;

    while (ulang == 'y'){
        cout << "Masukkan nama item : "; cin >> item;
        cout << "Masukkan status : "; cin >> stat;
        cout << "Nama item : " << item << endl;
        cout << "Status item : " << stat << endl;

        if(item_pertama){
            item_sblm = "Nothing";
            item_pertama = false;
        }
        cout << "Item sebelumnya : " << item_sblm << endl;
        item_sblm = item;

        if(stat > stat_terhebat){
            item_terhebat = item;
            stat_terhebat = stat;
        }
        cout << "Item terhebat : " << item_terhebat << endl;

        if(stat < stat_terlemah){
            item_terlemah = item;
            stat_terlemah = stat;
        }
        cout << "Item terlemah : " << item_terlemah << endl;
        cout << "Masukkan item lagi? (y/n)\n"; cin >> ulang;

    }

    return 0;
}
