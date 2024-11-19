#include<iostream>
#include<stack>
using namespace std;
//for reverse
void displayrec(stack<int>&st){
    if(st.size()==0) return;
    int x=st.top();
    cout<<x<<" ";
    st.pop();
    displayrec(st);
    st.push(x);

}
//for normal display
void display(stack<int>&st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}
void pushatbottom(stack<int>&st,int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x=st.top();
    st.pop();
    pushatbottom(st,val);
    st.push(x);

}
void pushatidx(stack<int>&st,int idx,int val){
    if(st.size()==idx){
        st.push(val);
        return;
    }
    int x=st.top();
    st.pop();
    pushatidx(st,idx,val);
    st.push(x);
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
   displayrec(st);
   cout<<endl;
   display(st);
   pushatbottom(st,60);
   cout<<endl;
   display(st);
   cout<<endl;
   pushatidx(st,2,90);
    display(st);
}
