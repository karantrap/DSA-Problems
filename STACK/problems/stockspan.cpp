#include<iostream>
#include<stack>
using namespace std;
int main(){
    int a[]={100,80,60,70,60,75,85};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
    stack<int>st;
    int pgi[n];//previous greater idx
    pgi[0]=1;
    st.push(0);
    for(int i=1;i<n;i++){
        while(st.size()>0 && a[st.top()]<=a[i]) st.pop();
        if(st.size()!=0) pgi[i]=st.top();
        else  pgi[i]=-1;
        pgi[i]=i-pgi[i];
        st.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<pgi[i]<<" ";
    }
}