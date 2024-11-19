#include<iostream>
#include<vector>
using namespace std;
void subsequence(int a[],int n,int i,vector<int>ans,int k){
    if(i==n){
        if(ans.size()==k){
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    subsequence(a,n,i+1,ans,k);
    ans.push_back(a[i]);
    subsequence(a,n,i+1,ans,k);
}
int main(){
    int a[]={1,2,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    int k=3;
    vector<int>v;
    subsequence(a,n,0,v,k);
}