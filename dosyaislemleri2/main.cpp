#include <iostream>
#include <fstream>

using namespace std;

int main() {
    //okuma işlemi için gerekli değişken tanımlama
    ifstream dosya;
    //okuduklarımızı aktaracağımız değişken;
    string line;
    dosya.open("ornek.txt");
    //dosya okunabilirse okuma işlemi
    while (dosya.good())
    {
        // verileri değişkene aktarma
        getline(dosya,line);
        cout << line << endl << endl;
    }
    dosya.close();
    
    return 0;
}