#include<iostream>
using namespace std;
int pow(int a,int b){
    if(b==1) return a;
    else if(b%2==0){
        int ans=pow(a,b/2)*pow(a,b/2);
        return ans;
    }
    else{
        int ans=pow(a,b/2)*pow(a,b/2)*a;
        return ans;
    }
}
int main(){
    cout<<pow(3,41);
}