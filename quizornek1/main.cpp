#include <iostream>
using namespace std;
//quiz soru 1
int main(){
    char dizi[7] = {'C','O','N','T','E','X','T'};
    char *p=dizi;

    for (int i = 6; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout  << p[j];
        }
        cout << endl;
    }
    return 0;
}