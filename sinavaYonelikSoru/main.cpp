#include <iostream>
#include <cmath>
#defined PI 3.14

using namespace std;

class daire {
    public:
        const double pi = 3.14;
        int r;
        daire(){
            r=0;
        }
        daire(int getR){
            r=getR;
        }
        double alanHesap(){
            return pi*pow(r,2);
        }
        double cevreHesap(){
            return 2*pi*r;
        }
};

class silindir : public daire {
    public: 
        int h;
        silindir(){
            h=0;
        }
        silindir(int getR,int getH) : daire(getR){
            r=getR;
            h=getH;
        }
        double hacimhesap(){
            return alanHesap()*h;
        }
        double sAlanHesap(){
            return cevreHesap()*h;
        }
};

class Kure : public daire{
    public:
        Kure(int getR): daire(getR){
            r=getR;
        }
        double kureAlan(){
            return (4*r* alanHesap())/3;
        }
};

int main(){
    cout << "Yarıçap girin: ";
    int a ;
    cin >> a;
    Kure kur(a);
    cout << endl << kur.kureAlan();
    
    
}