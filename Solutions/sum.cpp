#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter row\n";
    cin>>m;
    cout<<"enter column";
    cin>>n;
    int a[m][n];
    cout<<"enter element of array\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int b[m][n];
    cout<<"enter element of second array\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    
    int sum[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        sum[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
}