#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>&q){
    for(int i=1;i<=q.size();i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void reorder(queue<int>&q){
    stack<int>st;
    int n=q.size();
    //pop first half from q to st
    for(int i=1;i<=n/2;i++){
        st.push(q.front());
        q.pop();
    }
    //then put that half to q
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    //now in q 2nd half is ahead now put it in st
    for(int i=1;i<=n/2;i++){
        st.push(q.front());
        q.pop();
    }
    //now one ele from st push it in q and front ele from q and put it in q
    while(st.size()>0){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    //reverse the q
    while(q.size()>0){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
}
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    display(q); 
    reorder(q);
    display(q);

}