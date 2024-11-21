#include<iostream>
#include<cmath>
#include<climits>
#include<vector>
using namespace std;
void fillsieve(vector<bool>&sieve){
        int n=sieve.size()-1;//since the size of sieve was n+1 so thats why we did size -1
        for(int i=2;i<=sqrt(n);i++){
            for(int j=i*2;j<=n;j+=i){ //ye loop 2 ke multiples ko non prime bnayegi
                sieve[j]=0; //0 is indicating non prime
            }
        }
}
int countPrimes(int n){

    
    if(n<=2) return 0;
    n=n-1;
    vector<bool>sieve(n+1,1);//size is n+1 as i want 1 on 1 index means each number is on it's own index and 1 is indicating the prime number
    fillsieve(sieve);
    int count=0;
    sieve[0]=0;
    sieve[1]=0;
    for(int i=2;i<=n;i++){
        if(sieve[i]==1) count++;
    }
    return count;
}
int main(){
    int n=25;
    cout<<countPrimes(n);
}
  