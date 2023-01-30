#include <iostream>

using namespace std;
//Private class örneği get ve set metotları
//Private class da dışarıdan veri girmek ve veri görmek için
//get ve set metotlarına ihtiyacımız var
//Sağ taraf devamı
class Dikdortgen{
    private:
        double en;
        double boy;
    public:
        void setHeight(double y){
            if (y<0)
            {
                boy=0;
            }
            else{
                boy=y;
            }
        }
        void setWitdh(double x){  
            if (x<0)
            {
                en=0;
            }
            else{
                en=x;
            }
        }
        double getHeight(){
            return boy;
        }
        double getWitdh(){
            return en;
        }
        double alan(){
            return getWitdh()*getHeight();
        }
};

int main(){
    Dikdortgen newD;
    newD.setHeight(100);
    cout << "Eni giriniz: ";
    int x;
    cin >> x;
    newD.setWitdh(x);

    cout << "Alanı: "<< newD.alan();
}