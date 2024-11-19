#include<iostream>
using namespace std;
int main(){
    int a[]={0,0,0,0,1,1,1,1,1,1};
    int n=10;
    int lo=0;
    int hi=n-1;
    int firstidx=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(a[mid]==1){
            if(mid==0){
                firstidx=mid;
                break;
            }
            else if(a[mid-1]!=1){
                firstidx=mid;
                break;
            }
            else{
                hi=mid-1;
            }
        }
        else if(a[mid]<1) lo=mid+1;
        else hi=mid-1;
    }
    if(firstidx=-1) cout<<0;
    else cout<<n-firstidx;
}