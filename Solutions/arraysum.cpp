#include<iostream>
using namespace std;
int main(){
    int n,a[n],sum=0;
    cout<<"enter size of the array:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        sum+=a[i];

    }
    cout<<"the sum of elements is:"<<sum<<endl;
    return 0;
}