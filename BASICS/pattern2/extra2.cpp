#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=3;i++){
        for(int j=1;j<=5;j++){
            if(i==1 && j==1) cout<<" ";
            else if(abs(i-j)==0 || abs(i-j)==2) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}