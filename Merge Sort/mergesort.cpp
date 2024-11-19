//T.C->O(nlogn), S.C.->O(n)(if we use clear) otherwise S.C->O(nlogn)
#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&a,vector<int>&b,vector<int>&res){
    int i=0;// for traversing in a;
    int j=0;// for traversing in b;
    int k=0;// for traversing in res;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){
            res[k++]=a[i++];

        }
        else{
            res[k++]=b[j++];
        }
    }
    if(i==a.size()){
        while(j<b.size()){
            res[k++]=b[j++];
        } 
    }
    if(j==b.size()){
        while(i<a.size()){
            res[k++]=a[i++];
        }
    }
}
void mergesort(vector<int>&v){
    int n=v.size();
    if(n==1) return;
    int n1=n/2,n2=n-n/2;//dividing the array into two sizes of size n1 and n2
    vector<int>a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    mergesort(a);
    mergesort(b);
    merge(a,b,v);
    a.clear();//here we used the clear to remove the occupied space in the memory so that ospace complexity of this code turns into O(n) from O(nlogn)
    b.clear();
}
int main(){
    int arr[]={5,6,3,2,90,75,54};
    int n1=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n1);
    for(int i=0;i<n1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    mergesort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}