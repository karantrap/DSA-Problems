#include<iostream>
using namespace std;
int main(){
    int a[]={9,6,4,2,3,5,7,0,1};
    int n=sizeof(a)/sizeof(a[0]);
    int sum1=0;
    for(int i=0;i<n;i++){
        sum1+=a[i];
    }
    int sum2=n*(n+1)/2;
    cout<<sum2-sum1;
}