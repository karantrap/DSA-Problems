#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the value :";
    cin>>n;
    vector< vector<int> > v;
    for(int i=0;i<n;i++){
        vector<int>a(i);
        v.push_back(a);
    }
    //generate
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                v[i][j]=1;
                cout<<endl;
            }
            else{
                v[i][j]=v[i-1][j]+v[i-1][j-1];
            }
        }
    }
    //print
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}