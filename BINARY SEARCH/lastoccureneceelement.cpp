#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,2,3,3,3,4,4,4,4,5,6};
    int n=12;
    int x=5;
    int lo=0;
    int hi=n-1;
    int firstidx=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(a[mid]==x){
            if(mid==n-1){
                firstidx=mid;
                break;
            }
            else if(a[mid+1]>x){
                firstidx=mid;
                break;
            }
            else{
                hi=mid-1;
            }
        }
        else if(a[mid]<x){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    if(firstidx==-1){
        cout<<"element is not repeating";
    }
    else{
        cout<<firstidx;
    }
}
    