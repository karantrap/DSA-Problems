#include<iostream>
#include<vector>
#include<queue>
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
    queue<int>q;
    for(int i=0;i<n;i++){
        if(a[i]<0) q.push(i);
    }
    int i=0;
    while(i+k<n){
        while(q.size()>0 && q.front()<i) q.pop();
        if(q.size()==0 || q.front()>=i+k) ans.push_back(0);
        else ans.push_back(a[q.front()]);
        i++;
    }
    display(ans);
}
