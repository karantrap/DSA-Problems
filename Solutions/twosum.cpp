#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int x;
    cout<<"enter the target value:";
    cin>>x;
    vector<int>v;
    int n;
    cout<<"enter the array size:";
    cin>>n;
    cout<<"enter array elements:";
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){  //if you will do this j=v.size();j>=0;j-- then multiple braces will repeat
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")";
            }
        }
    }
    return 0;
}