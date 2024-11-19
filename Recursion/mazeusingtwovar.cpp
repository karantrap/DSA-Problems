#include<iostream>
using namespace std;
int maze(int row,int column){
    if(row<1 || column<1) return 0;
    if(row==1 && column==1) return 1;
    int rightways=maze(row,column-1);
    int downways=maze(row-1,column);
    int totalways=rightways+downways;
}
void printpath(int row,int column,string s){
    if(row<1 || column<1) return;
    if(row==1 && column==1){
        cout<<s<<endl;
        return;
    }
    printpath(row,column-1,s+'R');//RIGHTWAYS
    printpath(row-1,column,s+'D');//DOWNWAYS
}
int main(){
    cout<<maze(3,3);
    printpath(3,3,"");
}