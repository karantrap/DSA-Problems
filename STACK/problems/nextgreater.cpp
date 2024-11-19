#include<iostream>
#include<stack>
using namespace std;
//remember it is pop,ans,push & traverse from last in array
int main(){
    int a[]={4,1,2,5,4,3,4,8,2,7};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
    stack<int>st;
    int ans[n];
    ans[n-1]=-1;
    st.push(a[n-1]);
    for(int i=n-2;i>=0;i--){
        //pop top if it is less than ele of array 
        while(st.size()>0 && st.top()<=a[i]){
            st.pop();
        }
        if(st.size()!=0)  ans[i]=st.top();
        else ans[i]=-1;
        st.push(a[i]);
    }
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
}