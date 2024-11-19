#include<iostream>
using namespace std;
void good(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    good(i+1,n);
}
int main(){
    int n;
    cout<<"enter the value of n->";
    cin>>n;
    good(1,n);
}