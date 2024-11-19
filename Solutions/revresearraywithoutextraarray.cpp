#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
}
int main(){
    vector<int>a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        a.push_back(b);
    }
    display(a);
    for(int i=0,j=a.size()-1;i<=j;i++,j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;

    }
    display(a);
}