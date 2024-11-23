#include<iostream>
using namespace std;
int ls(int a[],int n,int num){
    for(int i=0;i<n;i++){
        if(a[i]==num) return true;
    }
    return false;
}
int main(){
    int a[]={0,2,5,4,3,1,0,8};
    int n=sizeof(a)/sizeof(a[0]);
    int longest=1;
    int x,count;
    for(int i=0;i<n;i++){
        x=a[i];
        count=1;
        while(ls(a,n,x+1)==true){
            x=x+1;
            count=count+1;
        }

        
    }
    cout<<count;
}