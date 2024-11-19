#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    cout<< st.top()<<endl;
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    //writing the code so that elements must be preserved in stack
    stack<int>temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    cout<<endl;
    while(temp.size()>0){
        int x=temp.top();
        temp.pop();
        st.push(x);
    }

}