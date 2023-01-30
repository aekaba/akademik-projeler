#include <iostream>
#include <stack>

using namespace std;

void showstack(stack <int> yigin) {
    while (!yigin.empty())
    {
        cout<<"\t"<< yigin.top();
        yigin.pop();
    }
    
}

int main() {
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(5);
    showstack(s);

    cout << "\ns.size(): "<<s.size();
    cout << "\ns.top(): "<<s.top();
    cout << "\ns.pop(): ";
    s.pop();
    showstack(s);
    return 0;
}