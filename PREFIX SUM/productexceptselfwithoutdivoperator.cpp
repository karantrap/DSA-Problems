#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    int p=1,p2=1;
    int pre[n],suffix[n],ans[n];
    pre[0]=p,suffix[n-1]=p;
    for(int i=1;i<n;i++){
        p*=a[i-1];
        pre[i]=p;
    }
    for(int i=n-2;i>=0;i--){
        p2*=a[i+1];
        suffix[i]=p2;
    }
    for(int i=0;i<n;i++){
      cout<<pre[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
      cout<<suffix[i]<<" ";
    }
    for(int i=0;i<n;i++){
        ans[i]=pre[i]*suffix[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
      cout<<ans[i]<<" ";
    }
    
}