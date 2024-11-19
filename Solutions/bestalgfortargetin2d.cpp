#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"no of rows:";
    cin>>m;
    cout<<"enter no of columns:";
    cin>>n;
    int target;
    cout<<"enter tagret:";
    cin>>target;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++){
        for(int j=n-1;j>=0;j--){
            if(a[i][j]<target){
                i++;
            }
            else if(a[i][j]>target){
                j--;
            }
            else if(a[i][j]==target){
                target=a[i][j];
            }
        }
    }
    if(target){
        cout<<"yes";
    }
    else{
        cout<<"np;";
    }
}

