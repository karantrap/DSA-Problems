#include<iostream>
#include<vector>
using namespace std;
void subset(int a[],int n,int i,vector<int>ans){
    if(i==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    subset(a,n,i+1,ans);
    ans.push_back(a[i]);
    subset(a,n,i+1,ans);
}
int main(){
    int a[]={1,2,3};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int>v;
    subset(a,n,0,v);
}