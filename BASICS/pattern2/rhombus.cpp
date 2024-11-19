#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter row:";
    cin>>n;
    //METHOD 1
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=(2*n-1);j++){
    //        if(i+j<n+1 || i+j>2*n) cout<<" ";
    //        else cout<<"*";
    //     }
    //     cout<<endl;
    // }

   // METHOD 2
    for(int i=1;i<=n;i++){
        //spaces
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++) cout<<"*";   //stars
        cout<<endl;
    }
}