#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>st){
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}
void pushatbottom(stack<int>&st,int x){
    stack<int>helper;
    while(st.size()>0){
        helper.push(st.top());
        st.pop();
    }
    st.push(x);
    while(helper.size()>0){
        st.push(helper.top());
        helper.pop();
    }
}
void pushatindex(stack<int>&st,int idx,int y){
    stack<int>temp;
    for(int i=st.size()-1;i>=idx;i--){
        temp.push(st.top());
        st.pop();
    }
    st.push(y);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    int x=70;
    int y=90;
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    print(st);
    cout<<endl;
    pushatbottom(st,x);
    print(st);
    cout<<endl;
    pushatindex(st,3,y);
    print(st);
}