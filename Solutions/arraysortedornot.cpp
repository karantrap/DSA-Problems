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
    cout<<"enter the size of the array:";
    cin>>n;
    cout<<"enter the elements:";
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    elem(v);
    for(int i=0;i<n;i++){
        if(v[i]>v[i+1]){
            int temp=v[i];
            v[i]=v[i+1];
            v[i+1]=temp;
        }
        cout<<"no it is not sorted";
        break;
        else{
            cout<<"it is sorted";
        }
    }
}