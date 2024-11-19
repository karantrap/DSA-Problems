#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(a)/sizeof(a[0]);
    int k=4,maxsum=INT_MIN,prevsum=0;
    int maxidx=0;
    // for(int i=0;i<=n-k;i++){
    //     int sum=0;
    //     for(int j=i;j<i+k;j++){
    //         sum+=a[j];
    //     }
    //     if(maxsum<sum){
    //         maxsum=sum;
    //         maxidx=i;
    //     }
    //     // maxsum=max(maxsum,sum);   //YE TB JB KEVL SUM PRINT KRNA H
    // }
    // cout<<maxsum<<endl<<maxidx;


    //NOW APPLYING THE SLIDING WINDOW AS ABOVE CODE IS GIVING THE TC O(n*k)
    for(int i=0;i<k;i++){ // Tno->O(k)
        prevsum+=a[i];
    }
    maxsum=prevsum;
    int i=1;
    int j=k;
    while(j<n){  //tno->O(n-k) so overall we can say that tc is O(n)
        prevsum=prevsum+a[j]-a[i-1];
        if(maxsum<prevsum){
            maxsum=prevsum;
            maxidx=i;
        }
        i++;
        j++;
    }
    cout<<maxsum<<endl<<maxidx;
}