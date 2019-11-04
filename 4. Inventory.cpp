#include <iostream>
#include <vector> //bagian dari STL
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

    vector<vector<string>> item{{"Pedang", "5"},{"Pisau", "2"},{"pistol", "8"},{"Kunai", "3"},{"bom", "10"}};
    vector<vector<string>> inventory;
    vector<vector<string>>::iterator iter1;
	vector<string>::iterator iter2;

    unsigned int pilih = 0;
    unsigned int inventoryku = 0;
    unsigned int hapus = 0;
    unsigned int maksInventory = 0;
    unsigned int itemTerpilih = 0;

    char ulang = 'y';
    long int maksItem = item.size();

    cout << "Jumlah item tersedia : " << maksItem << endl;
	cout << "Max kapasitas inventory : ";
	cin >> maksInventory;
	cout << endl;

    while(ulang == 'y'){
        cout << "Inventory system : " << endl;
        cout << "1. Tampilkan inventory " << endl;
        cout << "2. Hapus item" << endl;
        cout << "3. Tambah item" << endl;
        cout << "Masukkan pilihan Anda : ";
        cin >> pilih;

        switch(pilih){
            case 1: //1. tampilkan inventory
            {
                //kondisi inventory kosong
                if(inventory.empty()) {
                    cout << "Inventory kosong" << endl;
                }
                else{
                    cout << "\nIsi inventory : " << endl;
                    for (iter1 = inventory.begin(); iter1 != inventory.end(); ++iter1) {
                        for (iter2 = iter1->begin(); iter2 != iter1->end(); iter2++) {
                            cout << *iter2 << " ";
                        }
                        cout << endl;
                    }
                }
                break;
            }

            case 2: //2. hapus item
            {
                if(inventoryku <= 0){
                    cout << "Anda belum mempunyai item" << endl;
                }
                else{
                    cout << "Hapus item ke- : ";
                    cin >> hapus;

                    if(hapus > inventoryku){
                        cout << "Item yang akan dihapus tidak ada" << endl;
                    }
                    else{
                        //menghapus item
                        inventory.erase(inventory.begin() + (hapus-1));
                        inventoryku--;
                        cout << "Jumlah inventory sekarang : " << inventoryku << endl; //tampilkan jumlah inventory setealh dihapus
                    }
                }
                break;
            }

            case 3: //tambah item
            {
                if(inventoryku >= maksInventory){
                    cout << "Inventory penuh" << endl;
                }
                else{
                    srand((unsigned)time(0));
                    itemTerpilih = (rand() % maksItem);
                    cout << "Anda mendapat : " << item[itemTerpilih][0] << " . Stat : " << item[itemTerpilih][1] << endl;

				inventory.push_back(vector<string>({ item[itemTerpilih][0] }));
				inventory[inventoryku].push_back(item[itemTerpilih][1]);
                inventoryku++;
				cout << "Jumlah inventory sekarang : " << inventoryku << endl;
                }
                break;
            }
        }

        cout << "Ingin menggunakan menu inventory lagi [y/n] ? ";
        cin >> ulang;
        cout << endl;
    }








    return 0;
}
