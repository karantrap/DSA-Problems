#include<iostream>
using namespace std;
void good(int n){
    if(n==0) return;
    good(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"enter the value of n->";
    cin>>n;
    good(n);
}