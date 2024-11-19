#include<iostream>
#include<string>
#include<vector>
using namespace std;
void subset(string ans,string original,int i){
    if(i==original.length()){
        cout<<ans<<endl;;
        return;
    }
    char x=original[i];
    subset(ans,original,i+1);
    subset(ans+x,original,i+1);
}
//METHOD 2(NOT THAT MUCH EFFICIENT) WITHOUT INDEX
// void subset2(string ans,string original){
//     if(original=""){ //REASON NHI SMJH AAYA ERROR DENE KA
//         cout<<ans<<endl;
//         return;
//     }
//     char ch=original[0];
//     subset2(ans,original.substr(1));
//     subset2(ans+ch,original.substr(1));
// }
//FOR STORING SUBSETS IN A VECTOR
void storesubset(string ans,string original,vector<string>&v){
    if(original==""){
        v.push_back(ans);
        return;
    }
    char ch=original[0];
    storesubset(ans,original.substr(1),v);
    storesubset(ans+ch,original.substr(1),v);
}
int main(){
    string str="karan";
    vector<string>v;
    storesubset("",str,v);
    for(string ele:v){
        cout<<ele<<" "<<endl;
    }
}