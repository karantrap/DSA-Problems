#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort1(vector<int>&v){
    int noz=0;
    int noo=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0) noz++;
        else noo++;
    }
    for(int i=0;i<v.size();i++){
        if(i<noz) v[i]=0;
        else v[i]=1;
    }

}
int main(){
    vector<int>v;
    int size;
    cout<<"enter the size of the array:";
    cin>>size;
    cout<<"enter the array elements:";
    for(int i=0;i<size;i++){
        int b;
        cin>>b;
        v.push_back(b);
    }
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort1(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}