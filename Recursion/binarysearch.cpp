#include<iostream>
using namespace std;
int search(int a[],int lo,int hi,int target){
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(a[mid]==target) return mid;
        else if(a[mid]<target) return search(a,mid+1,hi,target);
        else return search(a,lo,mid-1,target);
    }
}
int main(){
    int a[]={10,12,20,32,34};
    int n=sizeof(a)/sizeof(a[0]);
    int result=search(a,0,n-1,32);
    if(result!=-1) cout<<"element is at index:"<<result;
    else cout<<"element not found";

}