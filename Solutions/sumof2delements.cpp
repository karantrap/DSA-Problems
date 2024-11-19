#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter no of rows:";
    cin>>m;
    cout<<"enter no of columns:";
    cin>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum+=a[i][j];
        }
    }
    cout<<"sum of elements is:"<<sum;
}