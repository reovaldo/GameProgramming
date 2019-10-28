#include <iostream>
#include <vector>
#include <cstring>
#include <ctime>

using namespace std;


int main()
{
    vector<string> item{"Pedang\tStat : 5","Pistol\tStat : 10","Keris\tStat : 7","Bazoka\tStat : 15","Sniper\tStat : 19"};
    vector<string> tas;
    vector<string>::iterator penunjuk;

    int menu = 0;
    int counter = 0;
    int itemTerpilih;
    int maksInventory;
    cout << "Jumlah item yang ada : " << item.size() << endl;
	cout << "Kapasitas Maksimal inventory : ";
	cin >> maksInventory;
	cout << endl;
    while(menu != 4)
        {
        cout << "\n1. Lihat Inventory" <<endl;
        cout << "2. Hapus Item" <<endl;
        cout << "3. Tambah Item" <<endl;
        cout << "4. Keluar" <<endl;
        cout << "Input Menu : ";
        cin >> menu;
        if(menu == 1)
        {
            if(tas.empty())
            {
                cout<<"\nInventory Kosong\n";
            }
            else
            {
                system("cls");
                penunjuk = tas.begin();
                int nomor=1;
                while(penunjuk != tas.end())
                {
                    cout <<nomor <<". "<< *penunjuk<< endl;
                    penunjuk++;
                    nomor++;
                }
            }
        }
        else if(menu == 2)
        {
            if(tas.empty())
            {
                cout << "Tas Kosong";
            }
            else
            {
            system("cls");
            penunjuk = tas.begin();
                int nomor=1;
                while(penunjuk != tas.end())
                {
                    cout <<nomor <<". "<< *penunjuk<< endl;
                    penunjuk++;
                    nomor++;
                }
                int hapus;
                cout<<"Inputkan item pada nomor berapa yang akan dihapus ";
                cin>>hapus;
                cout<<tas[hapus-1]<<" Sudah dihapus";
                tas.erase(tas.begin()+hapus-1);
                counter--;
                getchar();
            }

        }
        else if(menu == 3)
            {
            if(tas.size() == maksInventory)
            {
                system("cls");
                cout<<"Tidak bisa menambahkan lagi, sebab tas sudah full";
            }
            else
                {
                system("cls");
                srand((unsigned)time(0));
                itemTerpilih = (rand() % item.size());
                tas.push_back(item[itemTerpilih]);
                cout << "\nKamu berhasil mendapatkan : "<< tas[counter] <<endl;
                counter++;
                getchar();
            }
        }
        else if(menu == 4)
            {
            cout<<"Bubar!\n";
            return 0;
        }
        else
        {
            cout<<"\nInput yang anda masukan salah!\n";
        }
    }
    return 0;
}
