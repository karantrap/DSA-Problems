#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class linkedlist{
    public:
    Node*head;
    int size;
    linkedlist(){
        head=NULL;
        size=0;
    }
};
void display(Node*head,Node*t1){
    Node*temp=head;
    Node*temp2=t1;
    while(temp!=NULL){
        if(temp==t1) temp=t1->next;
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
int middlenode(Node*head){
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    display(head,slow);   
}
int main(){
    Node*a=new Node(10);
    Node*b=new Node(20);
    Node*c=new Node(30);
    Node*d=new Node(40);
    Node*e=new Node(50);
    Node*f=new Node(60);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    cout<<middlenode(a);
}