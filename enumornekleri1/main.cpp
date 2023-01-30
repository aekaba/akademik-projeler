#include <iostream>
using namespace std;
//Struct Örneği
struct ogrenci
{
    string ad;
    string soyad;
    string no;
    int puan;
};
int main() {
    ogrenci newOgrenci[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Öğrencinin Adı: ";
        cin >> newOgrenci[i].ad;
        cout << "Öğrencinin Soyadı: ";
        cin >> newOgrenci[i].soyad;
        cout << "Öğrencinin numarası: ";
        cin >> newOgrenci[i].no;
        cout << "Notu: ";
        cin >> newOgrenci[i].puan;
    }
    
    for (int i = 0; i < 3; i++)
    {
        cout << endl << endl<< "Adı: "<<newOgrenci[i].ad<< " Soyadı: "<< newOgrenci[i].soyad<<
        " No: "<< newOgrenci[i].no << " Notu: "<< newOgrenci[i].puan;
    }
        return 0;
}