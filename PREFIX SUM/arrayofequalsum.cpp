//THIS PROGRAM IS FOR DIVING THE ARRAY INTO EQUAL SUM;
#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,10,5};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=1;i<n;i++){
        a[i]+=a[i-1];
    }
    int idx=-1;
    for(int i=1;i<n;i++){
        if(a[i]*2==a[n-1]){ //YE KIND OF FORMULA HAI A[I]*2==A[N-1] (REMEMBER THIS CONCEPT)
            idx=i;
            break;
        }
    }
    if(idx!=-1) cout<<"yes given array can be partitiones at "<<idx;
    else cout<<"no array can't be partitioned";
}