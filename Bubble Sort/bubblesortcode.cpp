#include<iostream>
using namespace std;
int main(){
    // OPTIMISED BUBBLE SORT
    int a[6]={5,1,2,1,4};
    int n=5;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    for(int i=0;i<n-1;i++){ //n-1 passes
        bool flag=true;
    //traverse
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
            flag=false; 
            }
        }
        if(flag==true){
            break;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}