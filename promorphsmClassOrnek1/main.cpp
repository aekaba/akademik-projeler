#include <iostream>
using namespace std;
/* Polymorphism örneği. Bu OOP nin özelliklerinden
bunlara slaytan okusan iyi olur*/
class Cokgen{
    public:
        double en;
        double boy;
};

class Dikdortgen:public Cokgen{
    public:
        double Alan(){
            return en*boy;
        }
};

class DikUcgen:public Cokgen{
    public:
        double Alan(){
            return (en*boy)/2;
        }
};

int main(){
    Dikdortgen dk;
    DikUcgen du;
    int x,y;
    cout << "x,y girin: ";
    cin >> x >> y;
    dk.boy= y;
    dk.en= x;
    du.boy=y;
    du.en=x;
    cout << "Üçgenin alanı: "<< du.Alan();
    cout << "Dikdörtgenin alanı: "<< dk.Alan();
}