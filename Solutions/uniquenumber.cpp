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
    int count=0;
    vector<int>v;
    int n;
    cout<<"enter the size:";
    cin>>n;
    cout<<"enter the elements:";
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    elem(v);
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(v[i]==v[j]){
                count++;
            }
        }
        
    }
    
    cout<<"the unique element is:"<<count;
}
