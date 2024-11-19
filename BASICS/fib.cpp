#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=1,b=1,c;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n-2;i++){
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
    }
}