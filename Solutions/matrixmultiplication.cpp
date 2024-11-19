#include<iostream>
using namespace std;
int main(){
    int m,n,p,q;
    cout<<"enter row of first matrix:";
    cin>>m;
    cout<<"enter column of first matrix:";
    cin>>n;
    cout<<"enter row of second matrix:";
    cin>>p;
    cout<<"enter column of second matrix:";
    cin>>q;
    if(n==p){
        int a[m][n];
        cout<<"enter element of first matrix:";
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
        cout<<endl;
        int b[p][q];
        cout<<"Enter the elements of 2nd matrix:";
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
        cout<<endl;
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                //r[i][j]=a[i][0]*b[0][1]+a[i][1]*b[1][i]+a[i][2]*b[2][i]
                for(int k=0;k<q;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        
        }
        cout<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
                
            }
            cout<<endl;
        }
    }
    else{
        cout<<"multiplication is not possible:";
    }
    return 0;
}
