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
int main(){
    vector<int>v;
    int sum_odd,sum_even;
    sum_odd=sum_even=0;
    int n;
    cout<<"enter the size:";
    cin>>n;
    cout<<"enter elements:";
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    elem(v);
    for(int i=0;i<n;i++){
        if(i%2==0){
            sum_even+=v[i];
        }
        else{
            sum_odd+=v[i];

        }
    }
    cout<<"the difference is:"<<abs(sum_even-sum_odd);
}