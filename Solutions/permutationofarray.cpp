#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void reverse(vector<int>&v){
    int i=0,j=v.size()-1;
    while(i<j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return;
}
void permutation(vector<int>&v){
    int n=v.size();
    int idx=-1;
    for(int i=n-1;i>=0;i--){
        if(v[i]<v[i+1]){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        reverse(v);
    }
    //sorting/reverse after pivot;
    reverse(v.begin()+(idx+1),v.end());
    //swapping idx and idx+1;
    int temp=v[idx];
    v[idx]=v[idx+1];
    v[idx+1]=temp; 
}
int main(){
    vector<int>v;
    int n;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter elements:";
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    permutation(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}