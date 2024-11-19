#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a[]={2,-3,4,4,-7,-1,4,-2,6};
    vector<int>ans;
    int n=sizeof(a)/sizeof(a[0]);
    int k=3;
    for(int i=0;i<=n-k;i++){
        for(int j=i;j<=i+k;j++){
            if(a[j]<0){
                ans.push_back(a[j]);
                break;
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}