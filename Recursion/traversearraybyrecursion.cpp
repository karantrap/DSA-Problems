#include<iostream>
#include<vector>
using namespace std;
void traverse(int a[],int n,int i){
    if(i==n) return;
    cout<<a[i]<<" ";
    traverse(a,n,i+1);
}
void display2(vector<int>&v,int i){
    if(i==v.size()) return;
    cout<<v[i]<<" ";
    display2(v,i+1);
}
int main(){
    int a[]={1,2,3,4};
    int n=4;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=a[i];
    }
    display2(v,0);
    cout<<endl;
    traverse(a,4,0);
}