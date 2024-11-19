#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void vec(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
void swap012(vector<int>&v){
     int noz=0,noo=0,notw=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0) noz++;
        else if(v[i]==1) noo++;
        else notw++;
    }
    for(int i=0;i<v.size();i++){
        if(i<noz){
            v[i]=0;
        }
        else if(i<(noz+noo)){
            v[i]=1;
        }
        else{
            v[i]=2;
        }
    }
}
int main(){
    vector<int>v;
    int size;
    cout<<"enter the array size:";
    cin>>size;
    cout<<"enter the elements:";
    for(int i=0;i<size;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    vec(v);
    cout<<endl;
    swap012(v);
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}

