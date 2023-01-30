#include <iostream>
//gerekli kütüphane
#include <fstream>

using namespace std;
// dosya tanımlama işlemleri
int main() {
    //gerekli tanımlama ve değişken ataması
    ofstream dosya;
    // dosyamızı açma ve ios::app kullanarak modunu ayarlama.
    //Mod eğer yazılmazsa önceki yazıların üstüne yazar ve o yazılar kaybolur. Bu mod da ise devamına yazar.
    // okuma yapılacak dosya varsa başlangıçta oluşturmak gerekiyor.
    dosya.open("ornek.txt",ios::app);
    // dosyaya birşeyler yazma.
    dosya<<"hadi ya\n";
    // dosyayı kapama. Program açılınca açılır kapanınca kapanır Unutma!
    dosya.close();
    return 0;
}