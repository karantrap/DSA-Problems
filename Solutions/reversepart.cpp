#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    int size;
    cout<<"enter the size:";
    cin>>size;
    cout<<"enter elements:";
    for(int i=0;i<size;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int n,m;
    cout<<"enter the part that you want to reverse:->";
    cin>>n>>m;
    for(int i=n,j=m;i<=j;i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}