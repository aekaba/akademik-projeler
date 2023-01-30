#include <iostream>
#include <fstream>

using namespace std;

/*
"ilk" isimli dosyanın içinden 1'den 20'ye kadar olan sayıları yazdırınız.
Bu sayıların toplamını hesaplayıp "son" isimli dosyanın içine yazdırınız.
*/

int main() {
    ofstream ilk;
    ilk.open("ilk.txt");
    int toplam=0;
    for (int i = 1; i <= 20; i++)
    {
        ilk << i << endl;
    }
    ilk.close();
    ifstream okuilk;
    okuilk.open("ilk.txt");
    
    for (int i=0;i<20;i++)
    {
        int yeni;
        okuilk>>yeni;
        toplam += yeni;
    }
    okuilk.close();
    
    ofstream son;
    son.open("son.txt");
    son<<"Toplam = "<<toplam;
    son.close();
    return 0;
}