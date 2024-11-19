#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void copy(vector<int>&v1){
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v1;
    copy(v1);
    vector<int>v2(v1.size());
    for(int i=v2.size()-1;i>=0;i++){
        cout<<v2[i]<<" ";

    }
    return 0;
}