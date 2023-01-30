#include <iostream>
#include <cmath>
using namespace std;
// Classla 2. derece denklem
class denklem {
    public:
        int a;
        int b;
        int c;
        void kokbul() {
            int delta = deltabul();
             if (delta > 0)
            {
                int kok1=((-b)+sqrt(delta))/(2*a);
                int kok2=((-b)-sqrt(delta))/(2*a);
                cout << "1.Kok= "<< kok1 << " 2.Kok= "<< kok2;
            } else if (delta == 0) {
                int kok1= (-1*b)/(2*a);
                cout << " Tek kök= "<< kok1;
            } else {
                cout << "Kök yok";
            }
        }
        int deltabul(){
            return pow(b,2)-(4*a*c);
        }
};

int main(){
    denklem denklem1;
    cout << "2. dereceden bir denklem girin";
    cin >> denklem1.a >> denklem1.b >> denklem1.c;
    denklem1.kokbul();
    int harf;
    harf='a';
    cout << endl<< harf;
}