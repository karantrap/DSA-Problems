#include<iostream>
using namespace std;
int main(){
    int a[]={0,1,2,3,4,5,8,9};
    int n=8;
    for(int i=0;i<n;i++){
        if(a[i+1]!=a[i]+1){  //or (i!=a[i]) return i;
            cout<<a[i]+1;
            break;
        }
    }
}