#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter row or column:";
    cin>>n;
    int a[n][n];
    cout<<"elements:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    //transpose;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    //reverse each row
    for(int k=0;k<n;k++){
        int i=0;
        int j=n-1;
        while(i<j){ 
            int temp=a[k][i];
            a[k][i]=a[k][j];
            a[k][j]=temp;
            i++;
            j--;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}