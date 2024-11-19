#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isbalanced(string s){
    if(s.size()%2!=0) return false;
    stack<int>st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') st.push('(');
        else{
            if(st.size()==0) return false;
            else st.pop();
        }
    }
    if(st.size()==0) cout<<"true"<<endl; 
    else cout<<"false"<<endl;

}
int main(){
    string s;
    cout<<"enter string:";
    getline(cin,s);
    cout<<isbalanced(s);
}