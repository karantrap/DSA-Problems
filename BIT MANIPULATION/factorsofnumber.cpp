#include<iostream>
#include<cmath>
using namespace std;
//method 1 having TC->O(n)
int factors(int n){
    for(int i=1;i<n;i++){
        if(n%i==0) cout<<i<<" ";
    }
}
//method 2
int factors2(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0) cout<<i<<" ";
    }
    for(int i=sqrt(n);i>=1;i--){
        if(n%i==0) cout<<n/i<<" ";
    }
}
int main(){
    cout<<factors2(60)<<endl;
}