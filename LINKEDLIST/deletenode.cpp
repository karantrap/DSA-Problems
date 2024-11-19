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
    Node*tail;
    int size;
    linkedlist(){
        head=tail=NULL;
        size=0;
    }
};
Node*deletenode(Node*head,Node*target){ // BUT WE WANT TO DELETE THE HEAD NODE THEN  CHNG VOID TO NODE*
//IF TARGET VALUE IS GIVEN INSTEAD OF ADDRESSS THEN (INT TARGET IS GIVEN )
    if(head==target){   // head->val==target
        head=head->next;
        return head;
    }
    Node*temp=head;
    while(temp->next!=target){ //temp->next->val=target
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
}
void display(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

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
    Node*head=a;
    head=deletenode(a,a);
    display(head);
}