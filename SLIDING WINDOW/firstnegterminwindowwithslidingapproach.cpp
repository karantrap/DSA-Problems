#include<iostream>
using namespace std;
int main(){
    int a[]={2,-3,4,4,-7,-1,4,-2,6};
    int n=sizeof(a)/sizeof(a[0]);
    int k=4;
    int p=-1;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int ans[n-k+1];
    for(int i=0;i<k;i++){
        if(a[i]<0){
            p=i;
            break;
        }
    }
    if(p==-1) ans[0]=1;
    else ans[0]=a[p];
    int i=1,j=k;
    while(j<n){
        if(p>=i) ans[i]=a[p];
        else {
            int p=-1;
            int x;
            for(x=i;x<=j;x++){
                if(a[x]<0){
                    p=x;
                    break;
                }
            }
            if(p!=-1) ans[i]=a[p];
            else ans[i]=1;
        }
        i++;
        j++;
    }
    for(int i=0;i<=n-k;i++){
        cout<<ans[i]<<" ";
    }
}