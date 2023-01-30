#include <iostream>
using namespace std;
//Biraz daha kalıtımlı class sağ taraf devamı
class matematik{
    public:
        int x,y;
        int carpma(){
            return x*y;
        };
        double bolme(){
            return (double) x/y;
        };
        int toplama(){
            return x+y;
        };
        int cıkarma(){
            return x-y;
        };
};

class cokgen:public matematik{
    public:
        int en;
        int boy;
        void giris(){
            en=3;
            boy=4;
        }
};

class ucgen : public cokgen{
    public:
        void alan(){
            x=en;
            y=boy;
            int pay= carpma();
            x=pay;
            y=2;
            double payda = bolme();
            cout << endl<<"Üçgenin alanı: "<< payda;
        }
};

class dikdortgen : public cokgen{
    public: 
        void alan(){
            x=en;
            y=boy;
            double alan= carpma();
            cout << endl << "Dikdörtgenin alanı: "<< alan;
        }
};

int main(){
    ucgen ucgen1;
    ucgen1.giris();
    ucgen1.alan();
    dikdortgen dikdortgen1;
    dikdortgen1.giris();
    dikdortgen1.alan();
}