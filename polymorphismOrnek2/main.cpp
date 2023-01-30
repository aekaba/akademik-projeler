#include <iostream>
#include <cmath>
using namespace std;
// polymorphism Orneği2
class Kare{
    public: 
        int kenar;
        int alan(){
            return 6*kenar;
        }
};

class Kup:public Kare{
    public:
        int alan(){
            return 6*pow(kenar,2);
        }
};

int main(){
    Kare ka;
    Kup ku;
    ka.kenar=4;
    cout <<"Karenin 6 yüzünün alanı: "<< ka.alan();
    ku.kenar=4;
    cout << "Küpün alanı: " << ku.alan();
}