#include<iostream>
#include<vector>
#include<string>
using namespace std;
void nonduplicatesubset(string ans,string original,vector<string>&v,bool flag){
    if(original==""){
        v.push_back(ans);
        return;
    }
    char ch=original[0];
    if(original.length()==1){
        if(flag==true)  nonduplicatesubset(ans+ch,original.substr(1),v,true);//left substring
        nonduplicatesubset(ans,original.substr(1),v,true);//right substr
        return;
    }
    char dh=original[1];
    if(ch==dh){
        if(flag==true)  nonduplicatesubset(ans+ch,original.substr(1),v,true);
        nonduplicatesubset(ans,original.substr(1),v,false);
    }
    else{
        if(flag==true)  nonduplicatesubset(ans+ch,original.substr(1),v,true);
        nonduplicatesubset(ans,original.substr(1),v,true);
    }
}
int main(){
    string s="aabb";
    vector<string>v;
    nonduplicatesubset("",s,v,true);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl; 
    }
}