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
    int n;
    cout<<"enter the size:";
    cin>>n;
    cout<<"enter elements:";
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    elem(v);
    for(int i=0,j=n-1;i<n,j>i;i++,j--){
        if(v[i++]==v[j--]){
            cout<<"yes it is palindrome";
            break;
        }
        else{
            cout<<"no array is not palindrome";
        }
    }
}