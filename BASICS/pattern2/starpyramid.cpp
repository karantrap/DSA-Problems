#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter row:";
    cin>>n;
    //METHOD 1
    // for(int i=1;i<=n;i++){
    //     for(int k=1;k<=n-i;k++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=(2*i-1);j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //METHOD 2(nst and nsp method)
    int nsp=n-1;//no of spaces
    int nst=1;//no of stars
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        nsp--;
        //stars
        for(int k=1;k<=nst;k++){
            cout<<"*";
        }
        nst+=2;
        cout<<endl;
    }
}
    