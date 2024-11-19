#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<power(x,y);
}