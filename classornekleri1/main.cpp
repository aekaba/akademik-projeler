#include <iostream>

using namespace std; 
//Class Orneği
class Box {
    public:
        int uzunluk;
        int genislik;
        int yükseklik;
        int hacim() {
            return uzunluk*genislik*yükseklik;
        }
    
};

int main() {
    box kutu1;
    kutu1.genislik=7;
    kutu1.uzunluk=6;
    kutu1.yükseklik=5;
    int kutu1hacim=kutu1.hacim();
    cout << kutu1hacim<< endl;
    box kutu2;
    kutu2.genislik=13;
    kutu2.uzunluk=12;
    kutu2.yükseklik=10;
    cout << kutu2.hacim();
}