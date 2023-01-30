#include <iostream>

using namespace std;

int main() {
    int a=0;
    //girilmek istenilen sayıyı önceden tanımlıyoruz
    cout << "Kaç sayı girmek istersiniz? ";
    cin >> a;
    /*dizi için tanımlamayı sonra yapıyoruz çünkü
    istenilen sayıyı kullanıcı tanımlayacak */

    int dizi[a];

    for (int i = 0; i < a; i++)
    {
        //dizilere sayı girişi
        cout << i+1 << ". Sayıyı giriyorsunuz: ";
        cin >> dizi[i];
    }
    //süslemeler
    cout << endl << endl;
    cout << "Girdiğiniz sayılar: ";
    for (int i = 0; i < a; i++)
    {
        //dizinin elemanlarını gösterme
        cout << "\t" << dizi[i];
    }
    return 0;
}