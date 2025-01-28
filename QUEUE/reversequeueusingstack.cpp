#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void display(queue<int>&q){
    int n=q.size();
    for(int i=1;i<=n;i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
//it is for reversing the queue
void reversequeue(queue<int>&q){
    int n=q.size();
    stack<int>st;
    while(q.size()>0){
        int x=q.front();
        q.pop();
        st.push(x);
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    display(q);
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);

    reversequeue(q);
}