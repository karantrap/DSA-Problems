//ISME NEW MATRIX ME TRANPOSE HOGA
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter rows:";
    cin>>m;
    cout<<"enter column:";
    cin>>n;
    cout<<"enter elements:";
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
    int tran[n][m];
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            tran[i][j]=a[j][i];    
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<tran[i][j]<<" ";
        }
        cout<<endl;
    }
}