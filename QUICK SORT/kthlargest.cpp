#include<iostream>
#include<algorithm>
using namespace std;
int partition(int a[],int si,int ei){
    int pivotelement=a[(si+ei)/2];
    int count=0;
    for(int i=si;i<=ei;i++){
        if(a[i]<pivotelement) count++;
    }
    int pivotidx=count+si;
    swap(a[(si+ei)/2],a[pivotidx]);
    int i=si;
    int j=ei;
    while(i<pivotidx && j>pivotidx){
        if(a[i]>=pivotelement) i++;
        if(a[j]<pivotelement) j--;
        else if(a[i]<pivotelement && a[j]>pivotelement){
            swap(a[i],a[j]);
        }
    }   
    return pivotidx;
}
int quicksort(int a[],int si,int ei,int k){
    int pi=partition(a,si,ei);
    if((pi+1)==k) return a[pi];
    else if(pi+1 < k) return quicksort(a,si,pi-1,k);                                                                                                                                                                                             ==k) return 
    else return quicksort(a,pi+1,ei,k);
}
int main(){
    int a[]={6,5,3,2,7,1,9};
    int n=sizeof(a)/sizeof(a[0]);
    int k=1;    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<quicksort(a,0,n-1,k);
    }

}