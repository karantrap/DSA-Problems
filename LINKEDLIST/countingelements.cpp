#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void display(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void displayrec(Node*head){
    if(head==NULL) return;
    cout<<head->data<<" ";
    displayrec(head->next);
}
int count(Node*head){
    Node*temp=head;
    int n=0;
    while(temp!=NULL){
        n++;
        temp=temp->next;
    }
    return n;
}
int main(){
    Node*a=new Node(10);
    Node*b=new Node(20);
    Node*c=new Node(30);
    Node*d=new Node(40);
    Node*e=new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    displayrec(a);
}