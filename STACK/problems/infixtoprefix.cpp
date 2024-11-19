#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int pr(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}
string solve(string val1,string val2,char ch){
    string s="";
    s.push_back(ch);
    s+=val1;
    s+=val2;
    return s;
    //OR
    // if(ch=='+') return '+'+val1+val2;
    // else if(ch=='-')  return '-'+val1+val2;
    // else if(ch=='*')  return '*'+val1+val2;
    // else return '/'+val1+val2;
}
int main(){
    string s="(7+9)*4/8-3";
    stack<string>val;
    stack<char>op;
    for(int i=0;i<s.size();i++){
        if(s[i]>=48 && s[i]<=57) val.push(to_string(s[i]-48));
        else{
            if(op.size()==0) op.push(s[i]);
            else if(s[i]=='(') op.push(s[i]);
            else if(op.top()=='(') op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                    char ch=op.top();
                    op.pop();
                    string val2=val.top();
                    val.pop();
                    string val1=val.top();
                    val.pop();
                    string ans=solve(val1,val2,ch);
                    val.push(ans);
                }
                op.pop(); //opening bracket has been removed
            }
            else if(pr(op.top())<pr(s[i])) op.push(s[i]);
            else{
                while(op.size()>0 && pr(op.top())>=pr(s[i])){
                    char ch=op.top();
                    op.pop();
                    string val2=val.top();
                    val.pop();
                    string val1=val.top();
                    val.pop();
                    string ans=solve(val1,val2,ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }    
        }
    }
    //stack op may contain some elements so we have to make op stack empty
    while(op.size()>0){
        char ch=op.top();
        op.pop();
        string val2=val.top();
        val.pop();
        string val1=val.top();
        val.pop();
        string ans=solve(val1,val2,ch);
        val.push(ans);
    }
    cout<<val.top();
}