#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a[]={5,3,1,4,2};
    int n=5;
    for(int ele:a){
        cout<<ele<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        int min=INT_MAX; //for minimum element
        int mindx=-1;// to get the index of minimum element
        for(int j=i;j<n;j++){  // j ko i se start krenge 
            if(a[j]<min){
                min=a[j];
                mindx=j;
            }
        }
        swap(a[i],a[mindx]);
    }
    for(int ele:a){
        cout<<ele<<" ";
    }
    return 0;
}