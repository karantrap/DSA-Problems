#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(9);
    v.push_back(65);
    v.push_back(54);
    v.push_back(55);
    v.push_back(264);
    v.push_back(245);
    v.push_back(12);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "<<endl;
    }
    cout<<v.size()<<" "<<v.capacity();
}
    