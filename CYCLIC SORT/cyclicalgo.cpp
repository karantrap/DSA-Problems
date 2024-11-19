//YE TABHI KAAM KREGI JAB ARRAY KE ELEMENTS 1 TO N DE RKHE HO YA 1 TO N PR HME KUCH KAAM KRNA HO
#include<iostream>
using namespace std;
int main(){
    int a[]={5,3,4,1,2};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int i=0;
    while(i<n){
        int correctidx=a[i]-1;
        if(i==correctidx) i++;
        else swap(a[i],a[correctidx]);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}