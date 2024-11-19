#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int a[]={2,1,56,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>mx) mx=a[i];
    }
    cout<<mx;
}