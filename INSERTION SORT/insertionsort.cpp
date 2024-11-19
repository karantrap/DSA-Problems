#include<iostream>
using namespace std;
int main(){
    int a[]={4,3,2,1 };
    int n=5;
    for(int ele:a){
        cout<<ele<<" ";
    }
    cout<<endl;
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1){
            if(a[j]>=a[j-1]) break;
            else{
                swap(a[j],a[j-1]);
            }
            j--;
        }
    }
    for(int ele:a){
        cout<<ele<<" ";
    }
}
        