#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,5,6,5};
    int n=sizeof(a)/sizeof(a[0]);
    int c=0;
    for(int i=1;i<n;i++){
        if(a[i]>=a[i-1]){

        }
        else cout<<"false";
    }
    cout<<"true";

}