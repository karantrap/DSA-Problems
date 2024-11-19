#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a[]={10,5,2,6};
    int n=sizeof(a)/sizeof(a[0]);
    int k=100;
    int pro=1;
    int len=-1;
    if(k<=1) cout<<1<<endl;
    for(int i=0;i<n;i++){
        int count=0;
        pro*=a[i];
        count++;
        len=max(len,count);
    }
    if(len==-1) cout<<-1<<endl;
    else cout<<len<<endl;
}