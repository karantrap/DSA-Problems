#include<iostream>
using namespace std;
void good(int n){
    if(n==0) return;
    cout<<n<<endl;
    good(n-1);
}
int main(){
    int n;
    cout<<"enter the value of n->";
    cin>>n;
    good(n);
}