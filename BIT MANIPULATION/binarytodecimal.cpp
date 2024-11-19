#include<iostream>
using namespace std;
int binarytodecimal(string &binary){
    int n=binary.size();
    int result=0;
    for(int i=n-1;i>=0;i--){
        char ch=binary[i];
        int num=ch-'0'; //to convert the string into number as ascii(1)-ascii(0)=1;ascii(0)-ascii(0)=0
        result=result+num*(1<<(n-i-1));//1<<(n-i-1) to get 2 ki power n-i-1
    }
    return result;
}
int main(){
    string s="001101";
    cout<<binarytodecimal(s);
}