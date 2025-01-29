#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>q){
    while(q.size()>0){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    int n=q.size();
    display(q);
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        arr[i]=q.front();
        q.pop();
    }
    int i=0;
    int j=n/2;
    while(i<n/2 && j<n){
        q.push(arr[i++]);
        q.push(arr[j++]);
    }
    while(i<n/2) q.push(arr[i++]);
    while(j<n) q.push(arr[j++]);
    display(q);

}