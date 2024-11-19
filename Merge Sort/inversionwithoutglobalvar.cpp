#include<iostream>
#include<vector>
using namespace std;
int inversion(vector<int>&a,vector<int>&b){
    int c=0;
    int i=0;
    int j=0;
    while(i<a.size() && j<b.size()){  
        if(a[i]>b[j]){
            c+=(a.size()-i);
            j++;
        }
        else{
            i++;
        }
    }
    return c;
}
void merge(vector<int>&a,vector<int>&b,vector<int>&res){
    int i=0,j=0,k=0;
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
int mergesort(vector<int>&v){
    int c=0;
    int n=v.size();
    if(n==1) return 0;
    int n1=n/2,n2=n-n/2;
    vector<int>a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    c+=mergesort(a);
    c+=mergesort(b);
    c+=inversion(a,b);
    merge(a,b,v);
    a.clear();
    b.clear();
    return c;
}
int main(){
    int a[]={5,1,3,0,4,9,6};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int>v(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<mergesort(v);
}