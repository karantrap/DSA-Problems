#include<iostream>
using namespace std;
string decimaltobinary(int n){
    string result="";
    while(n>0){
        if(n%2==0) result="0"+result;
        else result="1"+result;
        n/=2;
    }
    return result;
}
int main(){
    int n=18;
    cout<<decimaltobinary(n);
}