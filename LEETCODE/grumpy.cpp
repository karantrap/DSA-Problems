#include<iostream>
using namespace std;
int main(){
    int a[]={1,0,1,2,1,1,7,5};
    int grumpy[]={0,1,0,1,0,1,0,1};
    int n=sizeof(a)/sizeof(a[0]);
    int k=3;
    int maxsum=0;
    for(int i=0;i<n;i++){
        grumpy[i]=0;
    }
    for(int i=0;i<=n-k;i++){
        int sum=0;
        for(int j=i;j<=i+k;j++){
            sum+=a[j];
        }

        
        maxsum=max(maxsum,sum);
    }
    cout<<maxsum<<endl;

}