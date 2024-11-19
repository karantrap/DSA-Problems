#include<iostream>
using namespace std;
int main(){
    int size,target,i;
    cout<<"enter the size:";
    cin>>size;
    cin>>target;
    int a[size];
    for(i=0;i<size;i++){
        cin>>a[i];
    }
    for(i=0;i<size;i++){
        if(a[i]==target){
            cout<<"the target value is:"<<a[i];
            break;
        }
        
    }
    if(i==size){
        cout<<"element is not present";
    }
    return 0;
}