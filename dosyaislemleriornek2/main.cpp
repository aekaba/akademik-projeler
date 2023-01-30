#include <iostream>
#include <fstream>

using namespace std;

//Bilgi isimli dosyamıza klavyeden girilen ad soyad ve yaşınızı yazdıran program.

int main() {
    ofstream dosya;
    dosya.open("Bilgi.txt");
    string ad,soyad;
    int yas;
    if (dosya.is_open())
    {
        cout << "Adınızı Giriniz: ";
        cin >> ad;
        cout << "Soyadınızı Giriniz: ";
        cin >> soyad;
        cout << "Yaşınızı Giriniz: ";
        cin >> yas;

        dosya << ad<<";"<<soyad<<";"<<yas << endl;
        dosya.close();
    }
    return 0;
}