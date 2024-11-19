#include<iostream>
using namespace std;
int main(){
    int a[5]={5,4,3,2,1};
    int n=5;
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            flag=false;
        }
    }
    if(flag==true){
        cout<<"SORTED";
    }
    else{
        cout<<"NOT SORTED";
    }
}