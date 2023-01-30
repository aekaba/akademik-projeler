#include <iostream>
#include <fstream>

using namespace std;
// adımızı soyadımızı bir dosyaya yazdırıp sonrada okutucaz;

int main()
{
    // Yazdırma Kısmı
    ofstream yazdosya;
    yazdosya.open("deneme.txt");
    if (yazdosya.is_open())
    {
        yazdosya << "Ata Emir Kaba" << endl;
        yazdosya << "Bu gün hava yağmurlu";
        yazdosya.close();
    }
    
    // Okuma Kısmı
    ifstream okudosya;
    string line;
    okudosya.open("deneme.txt");
    if (okudosya.is_open())
    {
        while (okudosya.good())
        {
            getline(okudosya, line);
            cout << line << endl;
        }
        okudosya.close();
    }

    return 0;
}