#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void displayarr(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[]={0,-1,-2,3,4,-5,6,4,7,-8};
    int n=sizeof(a)/sizeof(a[0]);
    displayarr(a,n);
    int k=3;
    vector<int>ans;
    for(int i=0;i<n-k+1;i++){
        bool flag=false;
        for(int j=i;j<i+k;j++){
            if(a[j]<0){
                ans.push_back(a[j]);
                flag=true;
                break;
            }
        }
        if(flag==false) ans.push_back(0);
    }
    display(ans);
}