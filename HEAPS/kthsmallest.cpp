#include<iostream>
#include<queue>
using namespace std;
int main(){
    int a[]={10,2,-4,5,18,24,1,-7,56};
    int k=4;
    int n=sizeof(a)/sizeof(a[0]);
    priority_queue<int>pq;
    for(int i=0;i<n;i++){
        pq.push(a[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top();
}