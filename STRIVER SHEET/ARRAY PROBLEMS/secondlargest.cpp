#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int a[]={4,43,2,4,23,90,54,57};
    int n=sizeof(a)/sizeof(a[0]);
    int mx=INT_MIN;
    int mx2=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>mx) mx=a[i];
        if(a[i]<mx && a[i]>mx2) mx2=a[i];
    }
    cout<<mx<<endl<<mx2;

}