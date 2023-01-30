#include <iostream>
#define PI 3.14 // pi tanımlama
// Classları dizi şeklinde kullanma
using namespace std;
class kure {
    public: 
        double yarıcap;
        double alan() {
            return 4 * PI * yarıcap * yarıcap;
        }
        double hacim(){
            return (4 * PI * yarıcap * yarıcap * yarıcap)/3; 
        }
};
class daire {
    public: 
        double yarıcap;
        double alan(){
            return PI * yarıcap * yarıcap;
        }
};

int main() {
    daire daire1[5]; // Class dizisi oluşturma
    for (int i = 0; i < 5; i++)
    {
        cout << i+1<<".Dairenin yarıçapını giriniz: ";
        cin >> daire1[i].yarıcap;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << i+1<<".Dairenin yarıçapını alanı: "<< daire1[i].alan()<<endl;
    }
    return 0;
}