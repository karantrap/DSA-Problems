#include<iostream>
using namespace std;
int sumoflsl(int a[],int n){
    int largest=a[0];
    int slargest=a[0];
    int sum;
    int maxi=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
        if(a[j]>largest) largest=a[j];
        if(a[j]>slargest && a[j]<largest) slargest=a[j];
        sum=largest+slargest;
        maxi=max(sum,maxi);
        }
    }
    return maxi;
}
int main(){
    int a[]={5,4,3,1,7};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<sumoflsl(a,n);
}