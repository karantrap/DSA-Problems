#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(pair<int,int>&p1,pair<int,int>&p2){
    //here first int->profit, second int->weight
    double r1=(p1.first*1.0)/(p1.second*1.0);
    double r2=(p2.first*1.0)/(p2.second*1.0);
    return r1>r2;
}
double FracKnap(vector<int>&profits,vector<int>&weights,int n,int W){
    //W->capacity of bag
    vector<pair<int,int>>arr;
    for(int i=0;i<n;i++){
        arr.push_back({profits[i],weights[i]});
    }
    sort(arr.begin(),arr.end(),cmp);
    double profit=0;
    for(int i=0;i<n;i++){
        if(arr[i].second<=W){
            profit+=arr[i].first;
            W-=arr[i].second;
        }
        else{
            profit+=((arr[i].first*1.0)/(arr[i].second*1.0))*W;
            W=0;
            break;
        }
    }
    return profit;
}
int main(){
    vector<int>profits={60,100,150};
    vector<int>weights={10,20,30};
    int n=3;
    int W=60;
    cout<<FracKnap(profits,weights,n,W);
    return 0;
}