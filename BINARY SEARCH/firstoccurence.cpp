#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,2,3,3,3,3,4,4,5,5,5,6,8,9};
    int n=15;
    int x=2;
    bool flag=false;
    int lo=0;
    int high=n-1;
    while(lo<=high){
        int mid=lo+(high-lo)/2;
        if(a[mid]==x){
            if(a[mid-1]!=x){
                flag=true;
                cout<<mid;
                break;
            }
            else{
                //a[mid]==x
                high=mid-1;
            }
        }
        else if(a[mid]<x) lo=mid+1;
        else high=mid-1;
    }
    if(flag==false) cout<<-1;
}