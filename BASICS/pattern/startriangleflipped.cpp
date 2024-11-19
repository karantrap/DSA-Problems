#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter row:";
    cin>>n;
    //MY METHOD
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if((i+j)>=(n+1)) cout<<"*";
    //         else cout<<" ";  
    //     }
    //     cout<<endl;
    // }
    for(int i=1;i<=n;i++){
        //spaces
        for(int k=1;k<=(n-i);k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}