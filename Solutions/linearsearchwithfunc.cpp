#include<iostream>
using namespace std;
int linear(int n,int a[],int target){
        for(int i=0;i<n;i++){
            if(a[i]==target){
                return a[i];
            }
        }
        return -1;
}
int main(){
    int n,target;
    cin>>target;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c=linear(n,a,target);
    cout<<"element is:"<<c;

}