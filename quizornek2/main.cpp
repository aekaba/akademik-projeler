#include <iostream>
#include <cmath>

using namespace std;

int fact(int a){
    int res =1;
    for (int i = 1; i <= a; i++)
    {
        res*=i;
    }
    return res;
}

double func(int a,int n){
    int us = (pow(-1,n)*pow((a-5),n));
    int alt = fact(n);
    return (double)us/alt;
}

int main(){
    cout << "a ve n sayılarını giriniz: "<< endl;
    int a;
    int n;
    cin >> a >> n;
    cout << " cevap: "<< func(a,n);
    return 0;
}
