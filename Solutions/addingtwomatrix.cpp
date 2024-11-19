#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m,n,p,q;
    cout<<"enter no of rows:";
    cin>>m;
    cout<<"enter no of columns:";
    cin>>n;
    cout<<"enter no of rows of second matrix:";
    cin>>p;
    cout<<"enter the no of columns of second matrix:";
    cin>>q;
    int a[m][n],b[p][q];
    cout<<"enter elements of first matrix:";   
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
    cout<<"enter elements of second matrix:";   
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    if((m!=p)||(n!=q)){
        cout<<"addition is not possible";
    }
    int res[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            
           res[i][j]=a[i][j]+b[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}
    