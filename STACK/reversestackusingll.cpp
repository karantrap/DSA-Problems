#include<iostream>
#include<stack>
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
Node*printll(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
    return head;
};
void print(stack<int>st){
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    print(st);
    cout<<endl;
    while(st.size()>0){
        Node*a=new Node(st.top());
        st.pop();
        Node*head=NULL;
        Node*tail=NULL;
        if(head==NULL){
            head=a;
            tail=a;
        }
        else{
            tail->next=a;
            tail=a;
        }
    }
}