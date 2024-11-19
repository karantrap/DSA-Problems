#include<iostream>
using namespace std;
int main(){
    int n,a[n];
    int max=a[0];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]<a[i+1]){
            max=a[i+1];  
        }

    }
    cout<<"the maximum element is:"<<max<<endl;
    return 0;
}