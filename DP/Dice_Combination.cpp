#include<iostream>
#include<vector>
#define mod 1000000007
using namespace std;
long long f(int n,vector<long long>&dp){
    if(n==0) return 1;
    if(dp[n]!=-1) return dp[n];
    long long sum=0;
    for(int i=1;i<=6;i++){
        if(n-i<0) break;
        sum=(sum%mod+f(n-i,dp)%mod)%mod;
    }
    return dp[n]=sum%mod;
}
int main(){
    vector<long long>dp(1000005,-1);
    int n;
    cin>>n;
    cout<<f(n,dp);
}