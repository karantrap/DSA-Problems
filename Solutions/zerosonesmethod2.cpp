#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    int size;
    cout<<"enter the array size:";
    cin>>size;
    cout<<"enter the array elements:";
    for(int i=0;i<size;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v[j]==1) j--;
        else if(v[i]==0) i++;
        else if((v[i]==1)&&(v[j]==0)){
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
    }
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}