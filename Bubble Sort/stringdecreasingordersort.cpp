#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="AZYZXBDXJK";
    string str;
    for(int i=0;i<s.size();i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
    cout<<str;
    cout<<endl;
   // sort(str.begin(),str.end());
    //cout<<str;

    //for sorting use bubble sort
    bool flag=true;
    for(int i=0;i<s.size();i++){
        if(str[i]>str[i+1]){
            swap(str[i],str[i+1]);
            flag=false;
        }
    }
    if(flag==true){
        cout<<" not sorted";
    }
    else{
        cout<<str;
    }
}