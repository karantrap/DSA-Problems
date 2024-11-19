//ISME SAME MATRIX ME TRANPOSE HOGA
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter rows/columns:";
    cin>>m;
    cout<<"enter elements:";
    int a[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" "; 
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=i+1 ;j<m;j++){
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}