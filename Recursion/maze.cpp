#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightways=maze(sr,sc+1,er,ec);
    int downways=maze(sr+1,sc,er,ec);
    int totalways=rightways+downways;
    return totalways;
}
void paths(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){
        cout<<s<<endl;//destination reached
        return;
    }
    paths(sr,sc+1,er,ec,s+'R');//rightways
    paths(sr+1,sc,er,ec,s+'D');//downways
}
int main(){
    cout<<maze(1,1,3,3)<<endl;
    paths(1,1,3,3,"");
}