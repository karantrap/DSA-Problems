#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter row:";
    cin>>n;
    int mid=n/2+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1;j++){
            if(i==mid || j==mid) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }

}