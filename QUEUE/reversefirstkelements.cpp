#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>&q){
    for(int i=0;i<q.size();i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void reversekele(queue<int>&q,int k){
    int n=q.size();
    stack<int>st;
    for(int i=0;i<k;i++){
        int x=q.front();
        q.pop();
        st.push(x);
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    for(int i=0;i<n-k;i++){
        int x=q.front();
        q.pop();
        q.push(x);
    }
}
int main(){
    queue<int>q;
    q.push(5);
    q.push(4);
    q.push(3);
    q.push(2);
    q.push(1);
    q.push(6);
    display(q);
    int k=5;
    reversekele(q,k);
    display(q);
}