#include <iostream>

using namespace std;
// Class Orneği 2
class Dikdortgen{
    public:
        double en;
        double boy;
        double alan(){
            return en*boy;
        }
        double cevre(){
            return (2*en)+(2*boy);
        }
};

int main(){
    Dikdortgen box1;
    box1.boy=50;
    box1.en=20;
    cout << "1. Dikdörtgen alanı= "<< box1.alan() << " Çevresi= "<< box1.cevre()<<endl;
    Dikdortgen box2;
    box2.boy=150;
    box2.en=100;
    cout << "2. Dikdörtgenin alanı= "<< box2.alan()<< " Çevresi= "<<box2.cevre();
    return 0;
}