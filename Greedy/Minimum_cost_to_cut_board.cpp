#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int MinCost(vector<int>&x,vector<int>&y,int m,int n){
    int hb=1;//no of horizontal blocks
    int vb=1;//no of vertical blocks
    sort(x.rbegin(),x.rend());
    sort(y.rbegin(),y.rend());
    int v=0;  //here v and h are just two pointers for trvaersal of both arrays
    int h=0;
    int cost=0;
    while(v<x.size() && h<y.size()){
        if(x[v]>y[h]){
            cost+=x[v]*vb;
            hb++;
            v++;
        }
        else{
            cost+=y[h]*hb;
            vb++;
            h++;
        }
    }
    while(v<x.size()){
        cost+=x[v]*vb;
        hb++;
        v++;
    }
    while(h<y.size()){
        cost+=y[h]*hb;
        vb++;
        h++;
    }
    return cost;
}
int main(){
    vector<int>x={2,1,3,1,4};
    vector<int>y={4,1,2};
    int m=6,n=4;
    cout<<MinCost(x,y,m,n);
}