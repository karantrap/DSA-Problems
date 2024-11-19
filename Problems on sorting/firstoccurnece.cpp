#include<iostream>
using namespace std;
int main(){
    int a[]={12,14,15,18,18};
    int n=5;
    int target=18;
    for(int i=0;i<n;i++){
        if(a[i]==target){
            return i;
            break;
        }
        else return -1;
    }
}
