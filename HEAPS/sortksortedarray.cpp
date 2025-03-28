#include<iostream>
#include<queue>
using namespace std;
int main(){
    int a[]={10,9,8,7,4,70,60,50};
    int k=4;
    int n=sizeof(a)/sizeof(a[0]);
    priority_queue<int,vector<int>,greater<int>>pq; //for ascending we will use min heap
    vector<int>ans;
    for(int i=0;i<n;i++){
        pq.push(a[i]);
        if(pq.size()>k){
            ans.push_back(pq.top());
            pq.pop();
        }
    }
    while(pq.size()>0){
        ans.push_back(pq.top());
        pq.pop();
    }
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
}