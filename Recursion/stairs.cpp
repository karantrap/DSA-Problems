#include<iostream>
using namespace std;
int stairs(int n){
        if(n==2) return 2;  /* if(n==0 || n=1) return 1;*/
        if(n==1) return 1;
        int ans=stairs(n-1)+stairs(n-2);
        return ans;
    }
int main(){
    cout<<stairs(5);
}