#include <iostream>
#define PI 3.14

using namespace std;

int main() {
    int *p;
    int a;
    cout << "Bir Sayı girin: ";
    cin >> a;
    p=&a;

    cout <<  "sayı: " << a << endl;
    cout << " sayının adresi: "<<p << endl;
    cout <<    " sayının bir fazlası: " <<a+1 << endl;
    cout << " sayının bir fazlasının adresi: "<<&a+1 << endl;
    cout << " sayının pointerli adresi: " <<&p << endl;
    cout << " sayının pointerli bir fazlasının adresi "<< *p+1 << endl;
    int c =5;
    int *b=&c;
    cout << PI;
    

    
    cout << "Sabitin adresi: " << b;
    
    
    
}