#include <iostream>

using namespace std;

struct ogrenci
{
    string no;
    int puan;
};

/*Struct olarak tanımlanan öğrenci structuna 5 değer girip not ortalamanın üstünde olanları tekrar yazdır*/
int main() {
    ogrenci newOgrenci[5];
    double ort;
    for (int i = 0; i < 5; i++)
    {
        cout << "Öğrencinin numarası: ";
        cin >> newOgrenci[i].no;
        cout << "Notu: ";
        cin >> newOgrenci[i].puan;
        ort += newOgrenci[i].puan;
    }
    ort=ort/5;
    cout << endl<< endl;
    for (int i = 0; i < 5; i++)
    {
        if (newOgrenci[i].puan>ort)
        {
            cout << endl << endl<<" No: "<< newOgrenci[i].no << " Notu: "<< newOgrenci[i].puan;
        }
    }
    cout << ort;
    return 0;
}