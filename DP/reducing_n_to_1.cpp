//PROBLEM DESCRIPTION->here we can apply three ops on n to reduce it to 1 in minimum steps, the ops are reduce n->n-1,if n%2==0 then n/2,and if n%3==0 then n/3

#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
#define inf INT_MAX
int helper(int n){
    if(n==1) return 0;
    if(n==2 || n==2) return 1;
    return 1+min({helper(n-1),(n%2==0)?helper(n/2):inf,(n%3==0)?helper(n/3):inf});
}
//APPLYING TOP DOWN APPROACH OF DP
int ftd(int i,vector<int>&dp){
    if(i==1) return 0;
    if(i==2 || i==3) return 1;
    if(dp[i]!=-1) return dp[i];
    return dp[i]=1+min({ftd(i-1,dp),(i%2==0)?ftd(i/2,dp):inf,(i%3==0)?ftd(i/3,dp):inf});
}
//APPLYING BOTTOM UP APPROACH

int fbu(int n,vector<int>&dp){
    dp[1]=0;
    dp[2]=dp[3]=1;
    for(int i=4;i<=n;i++) dp[i]=1+min({dp[i-1],(i%2==0)?fbu(n/2,dp):inf,(i%3==0)?fbu(n/3,dp):inf});
    return dp[n];
}
int main(){
    cout<<"Enter the number:";
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<"The minimum steps to reduce n to 1 by top down approach are:"<<ftd(n,dp);
}