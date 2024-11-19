#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter row:";
    cin>>n;
    int a=0;
    int b=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0) cout<<b<<" ";
            else cout<<a<<" ";
        }
        cout<<endl;
    }
}