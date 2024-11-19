#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int a[]={19,12,23,8,16};
    int n=5;
    // vector<int>v(n,0);//each element of vector is 0 which means not visited
    // int x=0;
    // for(int i=0;i<n;i++){
    //     int min=INT_MAX;
    //     int mindx=-1;
    //     for(int j=0;j<n;j++){
    //         if(v[j]==1) continue;
    //         else{
    //             if(min>a[j]){
    //                 min=a[j];
    //                 mindx=j;
    //             }
    //         }
    //     }
    //     a[mindx]=x;
    //     v[mindx]=1;//visited
    //     x++;
    // }
    int x=0;
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int mindx=-1;
        for(int j=0;j<n;j++){
            if(a[j]<=0) continue;
            else{
                if(min>a[j]){
                    min=a[j];
                    mindx=j;
                }
            }
        }
        a[mindx]=-x;
        x++;
    }
    for(int i=0;i<n;i++){
        a[i]=-a[i];
        cout<<a[i]<<" ";
    }
}
