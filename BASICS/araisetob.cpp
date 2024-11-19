#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    float pow=1;
    bool flag=true;
    if(a==0 && b==0) cout<<"not defined";   
    if(b<0){
        b=-b;
        flag=false;
    }
    for(int i=1;i<=b;i++){
            pow*=a;
    }
    if(flag==false){
        pow=1/pow;
    }
    cout<<pow;
}