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
    if(n<10) return 1;
    if(dp[n]!=-1) return dp[n];
    vector<int>d=getdigit(n);
    int ans=INT_MAX;
    for(int i=0;i<d.size();i++) ans=min(ans,reduce(n-d[i],dp));
    return dp[n]=1+ans;
}
//  BOTTOM UP APPROACH
int fbu(int num,vector<int>&dp){
    dp[0]=0;
    for(int i=1;i<10;i++) dp[i]=1;
    for(int n=10;n<=num;n++){
        vector<int>d=getdigit(n);
        int result=INT_MAX;
        for(int i=0;i<d.size();i++) result=min(result,dp[n-d[i]]);
        dp[n]=1+result;
    }
    return dp[num];
}
int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<fbu(n,dp);
}