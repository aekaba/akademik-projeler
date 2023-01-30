#include <iostream>
#include <fstream>

using namespace std;

/*
"calisma" isimli dosyanın içine 10'dan 30'a kadar 5'er 5'er artan sayıları yazdırınız.
bu sayıların çarpımını "hesap" isimli dosyaya yazdınırız.
*/

int main() {
    ofstream calisma;
    calisma.open("calisma.txt");
    int carpım=1;
    for (int i = 10; i <= 30; i=i+5)
    {
        calisma << i << endl;
        
    }
    calisma.close();
    ifstream okucalisma;
    okucalisma.open("calisma.txt");
    
    for (int i =0;i<5;i++)
    {
        int yeni;
        okucalisma>>yeni;
        if (yeni>0)
        {
            carpım *= yeni;
        }
    }
    okucalisma.close();
    
    ofstream hesap;
    hesap.open("hesap.txt");
    hesap<<"Çarpım = "<<carpım;
    hesap.close();
    return 0;
}