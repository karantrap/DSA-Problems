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
//BOTTOM UP APPROACH
int fbu(int n,vector<long long>dp){
    dp[0]=1;
    for(int k=1;k<=n;k++){
        long long sum=0;
        for(int i=1;i<=6;i++){
            if(k-i<0) break;
            sum=(sum%mod+dp[k-i]%mod)%mod;
        }
        dp[k]=sum%mod;
    }
    return dp[n];
}
int main(){
    vector<long long>dp(1000005,-1);
    int n;
    cin>>n;
    cout<<fbu(n,dp);
}