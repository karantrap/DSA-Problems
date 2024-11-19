#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&v,int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>w;
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        w.push_back(a);
    }
    display(w,m);
    reverse(w.begin(),w.end());
    display(w,m);
}