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
class Stack{
    public:
    Node*head;
    int size;
    Stack(){
        head=NULL;
        size=0;
    }
    void push(int val){
        Node*temp=new Node(val);
        temp->next=head;
        head=temp;
        size++;
    }
    void pop(){
        if(head==NULL){
            cout<<"stack is empty:"<<endl;
            return;
        }
        head=head->next;
        size--;
    }
    int top(){
        if(head==NULL){
            cout<<"stack is empty:"<<endl;
            return -1;
        }
        return head->data;
    }
    void print(Node*temp){
        if(temp==NULL) return;
        print(temp->next);
        cout<<temp->data<<" ";
    }
    void display(){
        Node*temp=head;
        print(temp);
        cout<<endl;
    }

};
int main(){
    Stack st;
    cout<<st.size<<endl;
    cout<<st.top()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.display();
}