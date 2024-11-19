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
    void insertatbeginning(int val){
        Node*temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void insertatend(int val){
        Node*temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    } 
    void insertatidx(int idx,int val){
        if(idx==0) insertatbeginning(val); //YHA IF AND ELSE IF M SIZE++ KRNE KI KOI NEED NHI H C0Z INSERTATEND AND INSERTATBEG ME ALREADY SIZE++ KIYA HUA H
        else if(idx==size) insertatend(val);
        else{
            Node*t=new Node(80);
            Node*temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
        }
    }
    int getelementatidx(int idx){
        if(idx<0 || idx>size) cout<<"invalid index"<<endl;
        else if(idx==0) return head->data;
        else if(idx==size-1) return tail->data;
        else{
            Node*temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            return temp->data;
        }
    }
    void deleteathead(){
        if(size==0) cout<<"list is empty";
        head=head->next;//when size will be greater than 0
        size--;
    }
    void deleteattail(){
        if(size==0) cout<<"list is empty";
        Node*temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
    }
    void deleteatindex(int idx){
        if(idx<0 || idx>size) cout<<"invalid index";
        else if(idx==0) deleteathead();
        else if(idx==size-1) deleteattail();
        else{
            Node*temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;           
            }
            temp->next=temp->next->next;
            size--;
        }
    }
    void display(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    } 


};
int main(){
    linkedlist ll;
    ll.insertatbeginning(100);
    ll.display();
    ll.insertatend(10);
    ll.display();
    ll.insertatend(20);
    ll.display();
    ll.insertatend(30);
    ll.display();
    ll.insertatend(40);
    ll.display();
    ll.insertatidx(2,80);
    ll.display();
    ll.deleteathead();
    ll.display();
    cout<<ll.getelementatidx(3)<<endl; 
    ll.deleteattail();
    ll.display();
    ll.deleteatindex(2);
    ll.display();
}