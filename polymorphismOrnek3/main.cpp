#include <iostream>
using namespace std;
// Overdiving örneği
class islem{
    public:
        void carpma(int x){
            cout << x*2<<"\t";
        }
        void carpma(double x){
            cout << x*3<<"\t";
        }
};

int main(){
    islem islm;
    islm.carpma(20);
    islm.carpma(20.2);
}