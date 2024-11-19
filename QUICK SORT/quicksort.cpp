//QUICK SORT IS UNSTABLE SORT  T.C.->O(nlogn),S.C->O(logn)
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int partition(int a[],int si,int ei){
    int pivotelement=a[(si+ei)/2]; //pivotelement can be a[si] also but T.C=O(n^2) in worst case,by making pivotelement as (si+ei)/2 worst case tc will be O(logn)
    int count=0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(a[i]<=pivotelement){
            count++;
        }
    }
    //PARTITION KE 2 KAAM H PEHLA PIVOTIDX NIKALO AUR USKO SHI POSITITON PR LAGAO AUR PIVOTELEMENT SE LESS ELE KO USKE LEFT M AND BDE ELE KO RIGHT M
    int pivotidx=count+si; //pivot ki actual position mili
    swap(a[(si+ei)/2],a[pivotidx]);//pivot ko shi position pr lga diya
    int i=si;
    int j=ei;
    while(i<pivotidx && j>pivotidx){
        if(a[i]<=pivotelement) i++;
        if(a[j]>pivotelement) j--;
        else if(a[i]>pivotelement && a[j]<=pivotelement){
            swap(a[i],a[j]);
        }
    }
    return pivotidx;
}
void quicksort(int a[],int si,int ei){
    if(si>=ei) return;
    int pi=partition(a,si,ei); //yha pivot idx ko isliye partition se nikal rhe h bcoz si and ei kuch bhi given ho skte h
    quicksort(a,si,pi-1);
    quicksort(a,pi+1,ei);
}
int main(){
    int a[]={2,5,4,9,8,43,54,7};//5 1 8 2 7 6 3 4
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}