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
    vector<int>v;
    int count=0;
    int size;
    cout<<"Enter the size of the array:";
    cin>>size;
    int x;
    cout<<"enter the value that you want to give:\n";
    cin>>x;
    cout<<"enter elements:";
    for(int i=0;i<size;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    elem(v);
    for(int i=0;i<size;i++){
        if(v[i]>x){
            count++;

        }
    }
    cout<<"no.of elements strictly greater than your value:"<<count;
    return 0;
}