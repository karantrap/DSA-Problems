#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter row:";
    cin>>m;
    cout<<"enter column:";
    cin>>n;
    int a[m][n];
    cout<<"enter elements:";
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
    int minr=0;
    int minc=0;
    int maxr=m-1;
    int maxc=n-1;
    while(minr<=maxr && minc<=maxc){
        //righ
        for(int j=minc;j<=maxc;j++){
            cout<<a[minr][j]<<" ";
        }
        minr++;
        if(maxr<minr || maxc<minc) break;
        //down
        for(int i=minr;i<=maxr;i++){
            cout<<a[i][maxc]<<" ";
        }
        maxc--;
        //left
        for(int j=maxc;j>=minc;j--){
            cout<<a[maxr][j]<<" ";
        }
        maxr--;
        //up
        for(int i=maxr;i>=minr;i--){
            cout<<a[i][minc]<<" ";
        }
        minc++;
    }
    //OUTPUT SHOULD BE 1 2 3 6 9 8 7 4 5
    return 0;
}