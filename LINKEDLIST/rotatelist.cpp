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
void print(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void rotate(Node*head,int k,int len){
    Node*temp=head;
    Node*temp2=head;
    int pos=len-k+1;
    for(int i=0;i<pos-1;i++){
        temp2=temp2 ->next;
    }
    Node*temp4=temp2;
    head=temp4->next;
    Node*temp3=head;
    while(temp3->next!=NULL){
        temp3=temp3->next;
    }
    temp3->next=temp;
    temp4->next=NULL;
    
    print(head);
}
void length(Node*head){
    Node*temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    cout<<len<<endl;
}
int main(){
    int k=2;
    Node*a=new Node(1);
    Node*b=new Node(2);
    Node*c=new Node(3);
    Node*d=new Node(4);
    Node*e=new Node(5);
    Node*f=new Node(6);
    Node*g=new Node(7);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;
    Node*temp=a;
    int len=0;
    length(a);
    rotate(a,k,len);
}