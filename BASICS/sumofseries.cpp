#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     // if(i%2==0) s1+=i;
    //     // else s2+=i;
 
    // }
    if(n%2==0) sum=-n/2;
    else sum=-n/2 + n;
    cout<<sum;
}