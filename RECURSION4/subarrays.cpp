#include<iostream>
#include<vector>
using namespace std;
void subarray(vector<int>v,int a[],int n,int idx){//will work in unique elements only
    if(idx==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<endl;
        return;
    }
    subarray(v,a,n,idx+1);//left m kuch push_back nhi krna (ye hmesha krna h)
    if(v.size()==0 || v[v.size()-1]==a[idx-1]){
        v.push_back(a[idx]);
        subarray(v,a,n,idx+1); 
    }
    // else if(v[v.size()-1]==a[idx-1]){
    //     v.push_back(a[idx]);
    //     subarray(v,a,n,idx+1);
    // }
}
int main(){
    int a[]={1,2,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int>v;
    subarray(v,a,n,0);
}