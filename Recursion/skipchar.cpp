#include<iostream>
#include<string>
using namespace std;
//this function is not good in terms of time complexity
void skipchar(string ans,string original){
    if(original.length()==0){
        cout<<ans;
        return;
    }
    char ch=original[0];
    if(ch=='a') skipchar(ans,original.substr(1));
    else skipchar(ans+ch,original.substr(1));
}
//METHOD 2
void skipchar2(string ans,string original,int i){
    if(i==original.length()){
        cout<<ans;
        return;
    }
    char ch=original[i];
    if(ch=='a') skipchar2(ans,original,i+1);
    else skipchar2(ans+ch,original,i+1);
}
int main(){
    string s="karantrapti";
    string sh="";
    skipchar2(sh,s,0);
}