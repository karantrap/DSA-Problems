#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    cout<<v.at(3);// same as []-> to print element
    cout<<v[3];

}