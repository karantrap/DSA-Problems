#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,23,43,45,457};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"the size of given array is:"<<n<<endl;
    return 0;
}