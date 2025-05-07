#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int MinProduct(vector<int>&arr){
    int cn=0,cp=0,cz=0;
    int pos_prod=1;//product of +ve elements
    int neg_prod=1;//product of -ve elements
    int largest_negative=INT_MAX;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<0){
            cn++;
            neg_prod*=arr[i];
            largest_negative=min(largest_negative,arr[i]);
        }
        else if(arr[i]>0){
            cp++;
            pos_prod*=arr[i];
        }
        else cz++;
    }
    if(cn==0){
        if(cz>0) return 0;
        else{
            auto it=min_element(arr.begin(),arr.end());
            return *it;
        } 
    }
    else{
        if(cn%2==0){
            return neg_prod/largest_negative;
        }
        else return pos_prod*neg_prod;
    }
}
int main(){
    vector<int>arr={-1,-1,-2,4,3};
    cout<<MinProduct(arr);
}