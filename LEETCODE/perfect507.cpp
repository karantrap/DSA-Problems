#include<iostream>
#include<cmath>
#include<climits>
#include<algorithm>
using namespace std;
bool perfect(int num){
    int sum=0;
    for(int i=1;i<sqrt(num);i++){
        if(num%i==0) sum+=i;
    }
    for(int i=sqrt(num);i>1;i--){ //here we have not included the 1 as n/1 will return 1 and we don't want n in the sum
        if(num%i==0) sum+=num/i;
    }
    return (sum==num);
}
int main(){
    int n=28;
    cout<<perfect(n);
}