#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int lowerBound(int a[],int n,int target){
    int lo=0,hi=n-1;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(a[mid]==target){
            flag=true;
            return a[mid-1];///lower_bound
        }
        else if(a[mid]<target) lo=mid+1;
        else hi=mid-1;
    }
    if(flag==false) return a[hi];
}
int main(){
    int a[]={1,4,6,9,12,15,18,21};
    int n=sizeof(a)/sizeof(a[0]);
    int target=11;
    cout<<lowerBound(a,n,target);
}