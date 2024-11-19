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
    int n;
    cout<<"enter the size:";
    cin>>n;
    cout<<"enter the elements:";
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    elem(v);
    int largest,sl,tl;
    largest=sl=tl=v[0];
    for(int i=0;i<n;i++){
        if(largest<v[i]){
            tl=sl;
            sl=largest;
            largest=v[i];
        }
        else if(v[i]>sl){
            tl=sl;
            sl=v[i];
        }
        else if(v[i]>tl){
            tl=v[i];
        }
    }
    cout<<"largest,secondlargest,thirdlargest:"<<largest<<","<<sl<<","<<tl;
}