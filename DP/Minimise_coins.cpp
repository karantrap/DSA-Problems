#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int f(vector<int>&coins,int amount,vector<int>&dp){
    if(amount==0) return 0;
    if(dp[amount]!=-2) return dp[amount];
    int res=INT_MAX;
    for(int i=0;i<coins.size();i++){
        if(amount-coins[i]<0) continue;
        res=min(res,f(coins,amount-coins[i],dp));
    }
    if(res==INT_MAX) return dp[amount]=INT_MAX;
    return dp[amount]=1+res;
}
int main(){
    int n,amount;
    cin>>n>>amount;
    vector<int>coins;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        coins.push_back(num);
    }
    vector<int>dp(1000006,-2);
    int ans=f(coins,amount,dp);
    if(ans==INT_MAX) cout<<"-1\n";
    else cout<<ans<<"\n";
}