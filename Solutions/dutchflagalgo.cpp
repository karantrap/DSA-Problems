#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void elem(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void dutch(vector<int>&v){
    int low=0,mid=0,high=v.size()-1;
    while(mid<=high){
        if(v[mid]==2){
            int temp=v[mid];
            v[mid]=v[high];
            v[high]=temp;
            high--;
        }
        else if(v[mid]==0){
            int temp=v[mid];
            v[mid]=v[low];
            v[low]=temp;
            low++;
            mid++;

        }
        else{
            mid++;
        }
    }
    return;

}
int main(){
    vector<int>v;
    int size;
    cout<<"enter the array size:";
    cin>>size;
    cout<<"enter the elements:";
    for(int i=0;i<size;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    elem(v);
    dutch(v);
    elem(v);
    return 0;
}