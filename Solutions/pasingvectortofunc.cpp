#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&a){ //IT IS NECESSARY TO USE "&" FOR VECTOR IN FUNCTION
    a[0]=100;
}
int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(87);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    display(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}