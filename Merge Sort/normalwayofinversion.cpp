//brute force
#include<iostream>
using namespace std;
int main(){
    int a[]={5,1,8,2,3};
    int n=sizeof(a)/sizeof(a[0]);
    int ic=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j] && i<j){
                ic++;
            }
        }
    }
    cout<<ic;
}