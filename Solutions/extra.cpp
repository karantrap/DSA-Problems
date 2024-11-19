#include<iostream>
#include<vector>
using namespace std;
void result(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void reversepart(int i,int j,vector<int>&v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return;
}
int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(9);
    result(v);
    int n=v.size();
    int k;
    cin>>k;
    if(k>n){
        k%=n;
    }
    reversepart(0,v.size()-1-k,v);
    reversepart(v.size()-k,v.size()-1,v);
    reversepart(0,v.size()-1,v);
    result(v);

    return 0;
}
