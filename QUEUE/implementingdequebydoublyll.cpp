#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next,*prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class Deque{
    public:
    Node*head,*tail;
    int s;
    Deque(){
        head=tail=NULL;
        s=0;
    }
    void pushBack(int val){ //InsertAtTail
        Node*temp=new Node(val);
        if(s==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        s++;
    }
    void pushFront(int val){ //InsertAtHead
        Node*temp=new Node(val);
        if(s==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        s++;
    }
    void popFront(){
        if(s==0){
            cout<<"deque is empty";
            return;
        }
        head=head->next;
        if(head!=NULL) head->prev=NULL;
        else tail=NULL;
        s--;
    }
    void popBack(){
        if(s==0){
            cout<<"deque is empty";
            return;
        }
        else if(s==1){
            popFront();
            return;
        }
        Node*temp=tail->prev;
        temp->next=NULL;
        tail=temp;
        s--;
        
    }
    int front(){
        if(s==0){
            cout<<"deque is empty";
            return -1;
        }
        return head->val;
    }
    int back(){
        if(s==0){
            cout<<"deque is empty";
            return -1;
        }
        return tail->val;
    }
    void display(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Deque q;
    q.pushBack(12);
    q.pushBack(13);
    q.pushBack(14);
    q.pushBack(15);
    q.display();
    q.popBack();
    q.display();
    q.popFront();
    q.display();
    q.pushFront(76);
    q.display();
}