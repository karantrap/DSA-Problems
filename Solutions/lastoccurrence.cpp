#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(23);
    v.push_back(4);
    v.push_back(54);
    v.push_back(32);
    v.push_back(32);
    v.push_back(23);
    v.push_back(36);
    int target=32;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==target){
            cout<<i<<" ";
            break;
        }
        }
        return 0;
}