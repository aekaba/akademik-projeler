#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int kok;
    
    for (int i = 1; i <= 40; i++)
    {
        kok = sqrt(i);
        if (kok*kok==i)
            cout << kok*kok << " tam kare sayı"<< endl;
    }
    
    
    return 0;
}
