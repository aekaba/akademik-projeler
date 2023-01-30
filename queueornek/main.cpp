#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue <int> g;
    g.push(1);
    g.push(2);
    g.push(3);
    while (!g.empty())
    {
        cout<<"\t"<<g.front();
        g.pop();
    }
    
}