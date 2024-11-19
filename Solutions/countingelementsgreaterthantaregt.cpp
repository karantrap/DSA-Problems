#include<iostream>
using namespace std;
int main(){
    int n,count=0,target;
    cout<<"the target value is:";
    cin>>target;
    cout<<"enter the size:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"the array are:";
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(target<a[i]){
            count++;

        }
    }
    cout<<"the elements which are greater than target value are:"<<count<<endl;
    return 0;
}