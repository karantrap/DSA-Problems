#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter row:";
    cin>>n;
    for(int i=1;i<=n;i++){
        //spaces
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        //number
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int q=i-1;q>=1;q--){
            cout<<q;
        }
        cout<<endl;
    }
}