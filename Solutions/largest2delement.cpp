#include<iostream>
#include<climits>
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
    int max=INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max<a[i][j]){
                max=a[i][j];
            }
        }
    } 
    cout<<"max elements is:"<<max;   
}