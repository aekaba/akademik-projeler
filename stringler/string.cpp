#include <iostream>
#include <string>

using namespace std;
int fbnc(int a){
    
    if (a==0){
        return 0;
    } if (a==1){
        return 1;
    }
    return fbnc(a-2)+fbnc(a-1);
}

int main() {
    int a = 0;
    cin >> a;
    cout << fbnc(a);
    return 0;
}