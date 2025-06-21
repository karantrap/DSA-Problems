#include<iostream>
#include<climits>
#include<vector>
using namespace std;
vector<int>getdigit(int n){
    vector<int>res;
    while(n>0){
        if(n%10!=0) res.push_back(n%10);
        n/=10;
    }
    return res;
}
int reduce(int n,vector<int>&dp){
    if(n==0) return 0;
    if(n==1) return 1;
    if(dp[n]!=-1) return dp[n];
    vector<int>d=getdigit(n);
    int ans=INT_MAX;
    for(int i=0;i<d.size();i++) ans=min(ans,reduce(n-d[i],dp));
    return dp[n]=1+ans;
}
int main(){
    cout<<"Enter the Number:";
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<reduce(n,dp);
}