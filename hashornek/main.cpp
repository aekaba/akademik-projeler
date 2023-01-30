#include <iostream>
using namespace std;

int main(){
    int dizi[8]={43,56,34,76,31,34,67,90};
    int hash[8];
    for (int i = 0; i < 8; i++)
    {
        int hashing = dizi[i]%8;
        
        if (hash[hashing]==0){
            hash[hashing]=dizi[i];
        } else{
            for (int j = 1; j <= 7; j++)
            {
                if (hash[hashing+j]==0){
                    hash[hashing+j]=dizi[i];
                }
            }
        }
    }
    for (int i = 0; i < 8; i++)
    {
        cout << i << ". Eleman= "<<hash[i]<<endl;
    }
    
}