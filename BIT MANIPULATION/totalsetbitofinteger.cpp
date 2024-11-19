#include<iostream>
using namespace std;
int decimaltobinary(int n){
    string result="";
    while(n>0){
        if(n%2==0) result="0"+result;
        else result="1"+result;
        n/=2;
    }
    int c=0;
    for(int i=0;i<result.size();i++){
        if(result[i]=='1') c++;
    }
    return c;
}
int main(){
    int n=64;
    cout<<decimaltobinary(8);
}