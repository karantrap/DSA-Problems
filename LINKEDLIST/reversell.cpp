#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=NULL; // ye null krna pdta h
    }
};
void reverse(Node*head){
    if(head==NULL) return;
    reverse(head->next); //pehle call then working
    cout<<head->data<<" ";
}
int main(){
    Node*a=new Node(10);
    Node*b=new Node(20);
    Node*c=new Node(30);
    Node*d=new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;
    reverse(a);
}