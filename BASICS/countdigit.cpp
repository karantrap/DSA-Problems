#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    while(n>0){
        n/=10;
        count++;
    }
    if(n==0) cout<<"no of digit is:"<<1;
    else cout<<"no of digit is:"<<count;
}