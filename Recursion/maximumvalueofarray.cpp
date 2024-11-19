#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
void maximum(int a[],int n,int i,int max){
    if(i==n){
        cout<<max;
        return;
    }
    if(max<a[i]) max=a[i];
    maximum(a,n,i+1,max);
}
int main(){
    int a[]={2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    maximum(a,n,0,INT_MIN);
}