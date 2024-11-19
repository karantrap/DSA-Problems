#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void skiparray(vector<int>&ans,int original[],int n,int i){
    if(i==n){
        return;
    }
    int x=original[i];
    // if(x!=1){
    //     ans.push_back(x);
    // }
    // skiparray(ans,original,n,i+1);
    if(x!=1)    ans.push_back(x);
    skiparray(ans,original,n,i+1);
}
int main(){  
    int a[]={1,2,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int>v;
    skiparray(v,a,n,0);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
//DOUBT