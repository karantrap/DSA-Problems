#include<iostream>
using namespace std;
int setbit(int n){
    int count=0;
    while(n>0){
        count++;
        n=(n & (n-1));
    }    
    return count;
}

// in built function for counting set bit
int inbuiltsetbit(int n){
    return __builtin_popcount(n);
}
int main(){
    cout<<setbit(14)<<endl;
    cout<<inbuiltsetbit(14);

}