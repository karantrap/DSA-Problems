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
        for(int j=0;j<n;j++){
            if(a[i][j]==target) cout<<"yes";
        }
    }
    cout<<"no";
}
    