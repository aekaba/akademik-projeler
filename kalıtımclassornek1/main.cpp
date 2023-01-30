#include <iostream>
#include <string>
using namespace std;
// Kalıtımlı Class Örneği
class insan{
    public:
        int kilo;
        double boy;
        string adres;
        void yemek(){
            ++kilo;
        }
};

class calisan : public insan{
    public: 
        int maas;
        void zam(int x){
            maas+=x;
        }
        void weight(){
            cout << kilo;
        }
};

int main() {
    calisan adam;
    adam.maas=5000;
    adam.kilo=70;
    cout << "Adamın kilosu: "<< adam.kilo<<" Maaşı: "<< adam.maas<<endl;
    adam.zam(1000);
    adam.yemek();
    cout << "Adamın maaşı: "<< adam.maas<<" kilosu: ";
    adam.weight();
}