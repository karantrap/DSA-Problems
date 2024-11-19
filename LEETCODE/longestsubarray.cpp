#include<iostream>
using namespace std;
int longest(int a[],int n,int k){
    int len=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=a[k];
            }
            if(sum==k) len=max(len,j-i+1);
        }
    }
    return len;
}
//optimised
int longest2(int a[],int n,int k){
    int len=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=a[j];
            if(sum==k) len=max(len,j-i+1);   
        }
    }
    return len;
}
//BETTER 
int twopointer(int a[],int n,int k){
    int i=0,j=0,len=0,sum=0;
    while(i<n && j<n){
        sum+=a[j];
        if(sum==k){
            len=max(len,j-i+1);
            sum=0;
            i++;
            j=i;
        }
        else j++;
    }
    return len;
}

int main(){
    int a[]={1,2,3,1,1,1,1,3,3};
    int k=6;
    int n=sizeof(a)/sizeof(a[0]);
    cout<<twopointer(a,n,k);
}