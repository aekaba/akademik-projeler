#include <iostream>

using namespace std;

int fact(int n){
	if(n <=1){
		return 1;
	}
	else {
		return n * fact (n-1);
    }
}

int main() {
    int a = 0;
    cout << "Bir sayı giriniz";
    cin >> a;
    int fct = fact(a);
    cout << fct;
    return 0;
}