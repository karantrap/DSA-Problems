#include<iostream>
#include<queue>
using namespace std;
int main(){
    int a[]={3,2,1,5,6};
    int k=2;
    int n=sizeof(a)/sizeof(a[0]);
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++){
        pq.push(a[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top();
}