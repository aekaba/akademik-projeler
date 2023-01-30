#include <iostream>
#include <fstream>

using namespace std;

/*giris isimli dosyamızda 10 tane sayı olsun. 
Bu 10 sayıyı okuyarak bu sayıların içinden ilk iki tanesini alıp
çıkış isimlii dosyaya yazdıran program*/

int main() {

    ifstream okudosya;
    okudosya.open("giris.txt");
    int i = 0;
    string line;
    ofstream yazdosya;
    yazdosya.open("cikis.txt");
    while (okudosya.good() && i<2)
    {
        getline(okudosya,line);
        yazdosya<<line<<endl;
        i++;
    }
    yazdosya.close();
    okudosya.close();
    return 0;
}