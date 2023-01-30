#include <iostream>
#include <cmath>
using namespace std;

class Hesap{
    private:
        int x;
    public:
    void setX(int a){
        x=a;
    }
    int getX(){
        return x;
    }
    double soru(){
        double a = pow(pow(x,3)-8,(double)1/5);
        return a;
    }
};

int main(){
    int x;
    cout << "x değerini giriniz: ";
    cin >> x;
    Hesap hsp;
    hsp.setX(x);
    cout <<"Cevap: " <<hsp.soru();
}