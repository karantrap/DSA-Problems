#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    vector<int>v;
    while(st.size()>0){
        cout<<st.top()<<" ";
        v.push_back(st.top());
        st.pop();  
    }
    cout<<endl<<"elements in reverse order:";
    for(int i=0;i<v.size();i++) st.push(v[i]);
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}