#include <iostream>
#define PI 3.14
#include <cmath>
using namespace std;

class Koni{
    private:
        double r;
        double h;
    public:
        void setR(int getR){
            r=getR;
        }
        void setH(int getH){
            h=getH;
        }
        double getR(){
            return r;
        }
        double getH(){
            return h;
        }
        double gethacim(){
            return (PI * pow(r,2)*h)/3;
        }
};

int main(){
    int h;
    int r;
    Koni kon;
    cout << "Yükseklik ve yarıçapı giriniz: ";
    cin >> h >> r;
    kon.setH(h);
    kon.setR(r);
    cout << endl << endl <<  "Koninin yüksekliği: "<< kon.getH() << " Yarıçapı: "<< kon.getR() << " Hacimi: "<< kon.gethacim();
}