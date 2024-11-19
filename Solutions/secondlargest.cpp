#include<iostream>
#include<climits>
using namespace std;
int main(){
    int max=INT_MIN;
    int smax=INT_MIN;
    int n;
    cout<<"ENTER THE SIZE:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
            
        }
    }
    cout<<"THE MAXIMUM ELEMENT IS:"<<max<<endl;
    for(int i=0;i<n;i++){
        if(smax<a[i]&&a[i]!=max){
            smax=a[i];
        }
    }
    cout<<"THE SECOND ELEMENT IS:"<<smax;
    return 0;
}