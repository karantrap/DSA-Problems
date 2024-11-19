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
    int min=INT_MAX;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(min>a[i][j]){
                min=a[i][j];
            }
        }
    } 
    cout<<"min  elements is:"<<min;   
}