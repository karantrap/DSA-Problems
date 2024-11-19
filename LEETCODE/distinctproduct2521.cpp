#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int a[]={2,4,3,7,10,6};
    int n=sizeof(a)/sizeof(a[0]);
    vector<bool>sieve(n,1);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    int c=0;
    fillsieve(sieve);
    sieve[0]=0;
    for(int i=2;i<=sum;i++){
        if(sieve[i]==1) c++;
    }
    cout<<c;
}