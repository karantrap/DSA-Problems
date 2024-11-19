#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int r=0,lastdigit=0;
    while(n>0){
        r*=10;
        lastdigit=n%10;
        r+=lastdigit;
        n/=10;
    }
    cout<<r;
}