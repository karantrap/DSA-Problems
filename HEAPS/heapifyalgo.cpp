#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i){
    while(true){
        int left=2*i;
        int right=2*i+1;
        if(left>=n) break;
        if(right>=n){
            if(arr[left]<arr[i]){
                swap(arr[i],arr[left]);
                i=left;
            }
            else break;
        }
        if(arr[left]<arr[right]){
            if(arr[left]<arr[i]) swap(arr[i],arr[left]);
            else break;
            i=left;
        }
        else{
            if(arr[right]<arr[i]) swap(arr[i],arr[right]);
            else break;
            i=right;
        }
    }
    
}
void print(int arr[],int n){
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    int arr[]={-1,10,1,2,20,5,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    for(int i=n/2;i>=1;i--) heapify(arr,n,i);
    print(arr,n);
}