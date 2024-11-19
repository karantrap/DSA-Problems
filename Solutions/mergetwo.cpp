#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>merge(vector<int>& a1,vector<int>& a2){
    int n=a1.size();
    int m=a2.size();
    vector<int>res(m+n);
    int i=n-1;
    int j=m-1;
    int k=m+n-1;
    while(i>=0 && j>=0){
        if(a1[i]>a2[j]){
            res[k]=a1[i];
            i--;
            k--;
        }
        else{
            res[k]=a2[j];
            j--;
            k--;
        }
    
    }
        if(i<0){
            while(j>=0){
                res[k]=a2[j];
                j--;
                k--;
            }
        }
        if(j<0){
            while(i>=0){
                res[k]=a1[i];
                i--;
                k--;

            }
        }
    
    return res;
}
int main(){
    vector<int>v1;
    int n;
    cout<<"enter the size:";
    cin>>n;
    cout<<"enter elements:";
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v1.push_back(a);
    }
    for(int i=0;i<n;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    vector<int>v2;
    int m;
    cout<<"enter the size:";
    cin>>m;
    cout<<"enter elements:";
    for(int i=0;i<m;i++){
        int b;
        cin>>b;
        v2.push_back(b);
    }
    for(int i=0;i<m;i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    vector<int>v=merge(v1,v2);
    

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
}