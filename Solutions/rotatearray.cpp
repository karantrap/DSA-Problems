#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    int size;
    cout<<"enter the size";
    cin>>size;
    cout<<"enter the array elements:";
    for(int i=0;i<size;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int k;
    cout<<"how much you want to rotate the array:";
    cin>>k;
    if(k>size){
        k%=size;
    }
    for(int i=0,j=v.size()-1-k;i<=j;i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
    cout<<endl;
    for(int i=v.size()-k,j=v.size()-1;i<=j;i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
    for(int i=0,j=v.size()-1;i<=j;i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
    for(int i=0;i<size;i++){
        cout<<v[i]<<" "; 
    }
    return 0;
}