#include<iostream>
using namespace std;
int search(int a[],int start,int end,int target){
    while(start<=end){
        if(a[start]==target) return start;
        else return search(a,start+1,end,target);
    }
    return -1;
}
int main(){
    int a[]={10,12,20,32,34};
    int n=sizeof(a)/sizeof(a[0]);
    int result=search(a,0,n-1,32);
    if(result!=-1) cout<<"element is at index:"<<result;
    else cout<<"element not found";

}