#include <iostream>
using namespace std;

int main(){
    for (int i = 10; i >= 0; i--)
    {
        if (i%2==0)
        {
            for (int a = i; a < 10; a+=2)
            {
                cout << " ";
            }
            for (int j = i; j > 1; j--)
            {
                cout << "*";
            }
            for (int a = i; a < 10; a+=2)
            {
                cout << " ";
            }
            cout << endl;
        } else {
            cout << endl;
        }
    }
    return 0;
}