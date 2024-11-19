#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>mergesort(vector<int>&a1,vector<int>&a2){
    int n=a1.size();
    int m=a2.size();
    vector<int>r(m+n);
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m){
        if(a1[i]<a2[j]){
            r[k]=a1[i];
            i++;
        }
        else{
            r[k]=a2[j];
            j++;
        }
        k++;
        if(i==n){
            while(j<m){
                r[k]=a2[j];
                k++;
                j++;
            }
        }
        if(j==m){
            while(i<n){
                r[k]=a1[i];
                k++;
                i++;
            }
        }

    }
    return r;
}
void elem(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
}
int main(){
    vector<int>a;
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"elements:";
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        a.push_back(c);
    }
    elem(a);
    vector<int>b;
    int m;
    cout<<"enter the size of 2nd array:";
    cin>>m;
    cout<<"elements:";
    for(int j=0;j<m;j++){
        int d;
        cin>>d;
        b.push_back(d);
    }
    elem(b);
    vector<int>w=mergesort(a,b);
    elem(w);
    return 0;
}
    