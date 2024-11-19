#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&a,vector<int>&b,vector<int>&res){
    int i=0;//for traversing in a
    int j=0;//for traversing in b
    int k=0;//for traversing in res
    while(i<a.size() && j<b.size()){
        if(a[i]>=b[j]){
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
    int n1=n/2,n2=n-n/2;
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
}
int main(){
    int a[]={2,3,1,43,55,38,0};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int>v(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    mergesort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}