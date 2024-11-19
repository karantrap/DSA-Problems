#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    int size;
    cout<<"enter the array size:";
    cin>>size;
    cout<<"enter array elements:";
    for(int i=0;i<size;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if((v[i]>0)&&(v[j]<0)){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
        else if(v[i]<0) i++;
        else if(v[j]>0) j--;
    }
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl; 
    return 0;
}