#include<iostream>
using namespace std;
int main(){
    int a[]={0,1,3,4,6,7,8,9,11};
    int n=9;
    int lo=0;
    int hi=n-1;
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(a[mid]==mid) lo=mid+1;
        else{
            ans=mid;
            hi=mid-1;
        }
    }
    cout<<ans;
}