#include <iostream>

using namespace std;

int main() {
    float sayi=0, arti=0,eksi=0,sifir=0;

    cout << "Kaç sayı girmek isterseniz?";

    cin >> sayi ;

    for (int i = 0; i < sayi; i++)
    {
        int yeni; 
        cout << i+1 << ". sayıyı girin: ";
        cin >> yeni ;
        if (yeni == 0)
            sifir+=1;
        else if (yeni > 0)
            arti+=1;
        else 
            eksi+=1;
    }
    cout << "Girilen sayı: "<< sayi << " Pozitif oranı= %" << arti/sayi*100 << endl;
    cout << "Girilen sayı: "<< sayi << " Negatif oranı= %" << eksi/sayi*100 << endl;
    cout << "Girilen sayı: "<< sayi << " Sıfır oranı= %" << sifir/sayi*100 << endl;
}
