#include<iostream>
#include<stack>
using namespace std;
int main(){
    int a[]={3,1,2,5,4,6,2,3};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
    stack<int>st;
    int ans[n];
    ans[0]=-1;
    st.push(a[0]);
    for(int i=1;i<n;i++){
        while(st.size()>0 && st.top()<=a[i]) st.pop();
        if(st.size()!=0) ans[i]=st.top();
        else ans[i]=-1;
        st.push(a[i]);  
    }
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
}
