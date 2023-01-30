#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};
Node elemanEkle(int s,Node root){
            Node yeni ;
            yeni.data=s;
            root.next=&yeni;
            return root;
        }

int main(){
    Node node1;
    node1.data=5;
    Node node2;
    Node node3;
    node2.data= 10;
    node3.data=15;
    node1.next=&node2;
    node2.next=&node3;
    cout << node1.next->next->data<<endl;
    node3=elemanEkle(61,node3);
    cout << node3.next->data;
}