#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
void remove(string s){
    stack<char>st;
    st.push(s[0]);
    for(int i=1;i<s.size();i++){
        if(s[i]==st.top()) continue;
        else st.push(s[i]);
    }
    string s2="";
    while(st.size()>0){
        s2+=st.top();
        st.pop();
    }
    reverse(s2.begin(),s2.end());
    cout<<s2; 
}
int main(){
    string s;
    cout<<"enter the string:";
    getline(cin,s);
    remove(s);
}