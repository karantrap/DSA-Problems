#include<iostream>
#include<vector>
using namespace std;
void combination(vector<int>v,int a[],int n,int target,int idx){
    if(target==0){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(target<0) return;
    for(int i=idx;i<n;i++){  //if we will start i from 0 then it will also give duplicate sets
        v.push_back(a[i]);
        combination(v,a,n,target-a[i],i);
        v.pop_back();// pop back isliye kiya h because jaisa 2,3,5 h to mujhe 2 ke case m vecotr m 2 add krna h 3 ke case m kevl 3 and 5 ke case m kevvl 5 so jb hm push back krnege to 2,3 bnega vector m to 2 ke case m 3 ko delete krme ke liye pop76
    }
}
int main(){
    int a[]={2,3,5};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int>v;
    combination(v,a,n,8,0);
}