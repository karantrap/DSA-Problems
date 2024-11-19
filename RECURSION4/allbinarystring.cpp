#include<iostream>
#include<string>
using namespace std;
void binarystring(string s,int n){
    if(s.length()==n){   //second method(if you want to decrease n by 1)  
        cout<<s<<endl;  /*binarystr(s+'0',n-1) like this*/                                        
        return;
    }
    binarystring(s+'0',n);
    if(s=="" || s[s.length()-1]=='0'){
        binarystring(s+'1',n);
    }
    //if we remove if condition and only give  binarystring(s+'1',n); then it will print all possible strings of length n
    
}
int main(){
    int n=4;
    string s="";
    binarystring(s,n);
}