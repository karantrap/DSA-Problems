#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
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
    stack<int>temp;
    while(st.size()>0){
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    stack<int>temp2;
    while(temp.size()>0){
        temp2.push(temp.top());
        temp.pop();
    }
 
    while(temp2.size()>0){
        st.push(temp2.top());
        temp2.pop();
    }
    print(st);
   
}