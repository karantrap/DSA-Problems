#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void elem(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v;
    int n;
    cout<<"enter the size:";
    cin>>n;
    cout<<"enter elements:";
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    elem(v);
    for(int i=0;i<n;i++){
        if(i%2==0){
            v[i]+=10;
        }
        else{
            v[i]*=2;
        }
        cout<<v[i]<<" ";

    }
}