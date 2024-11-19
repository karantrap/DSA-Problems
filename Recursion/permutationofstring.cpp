#include<iostream>
#include<string>
using namespace std;
void permutation(string ans,string original,int i){
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<original.length();i++){
        char ch=original[i];
        string left=original.substr(0,i);
        string right=original.substr(i+1);
        permutation(ans+ch,left+right,0);
    }
}
int main(){
    string o="acb";
    string ans="";
    permutation(ans,o,0);

}