#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string.h>

using namespace std;

int main()
{
    int hasil_acak;
    string kata_asli;

    srand(static_cast<unsigned int>(time(0)));
    cout << "Input kata : ";
    cin >> kata_asli;
    string kata_acak = kata_asli;
    cout<< "\nKata : "<<kata_asli;
    cout<<"\nJumlah huruf : "<<kata_asli.size();

    cout<<"\n";
    int i=0;
    int jumlah_huruf = kata_asli.size();
    for (int i = 0; i < jumlah_huruf; i++) {
        int huruf1 = (rand() % jumlah_huruf);
        int huruf2 = (rand() % jumlah_huruf);
        char temp = kata_acak[huruf1];
        kata_acak[huruf1] = kata_acak[huruf2];
        kata_acak[huruf2] = temp;
    }

    cout<< "\nKataAcak : "<<kata_acak<< endl;
    return 0;
}
