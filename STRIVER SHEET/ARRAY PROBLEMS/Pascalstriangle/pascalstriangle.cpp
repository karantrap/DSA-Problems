#include<iostream>
#include<vector>
using namespace std;
//THE FIRST QUESTION IS TO PRINT THE VALUE AT THE GIVEN ROW AND COLUMN
int pascal(int row,int col){
    long long ans=1;
    row=row-1;
    col=col-1;
    for(int i=0;i<col;i++){
        ans=ans*(row-i);
        ans=ans/(i+1);
    }
    return ans;
}
//BY GIVING THE NTH ROW WE ARE PRINTING ALL THE VALUES
void pascalvalues(int n){
    long long ans=1;
    cout<<ans<<" ";
    for(int i=1;i<n;i++){
        ans=ans*(n-i);
        ans=ans/i;
        cout<<ans<<" ";
    }
}
int main(){
    int r=5;
    int c=3;
    cout<<pascal(r,c)<<endl;
    pascalvalues(5);
}