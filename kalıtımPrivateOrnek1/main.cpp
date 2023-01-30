#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;
//Private Class
class Silindir{
    private:
        double h;
        double r;
    public:
        void setHeight(double height){
            h=height;
        }
        void setRad(double rad){
            r=rad;
        }
        double getHeight(){
            return h;
        }
        double getRad(){
            return r;
        }
        double getHacim(){
            return PI*pow(getRad(),2)*getHeight();
        }
};
int main(){
    Silindir sil;
    double r;
    double h;
    cout << "R ve H Değerlerini girin";
    cin >>  r >> h;
    sil.setRad(r);
    sil.setHeight(h);
    cout << sil.getHacim();
}