#include<iostream>
#include<vector>
#include<set>
using namespace std;
int unionofarray(int a1[],int a2[],int n1,int n2){
    // int a3[n1+n2];
    // for(int i=0;i<n1;i++){
    //     a3[i]=a1[i];
    // }
    // for(int i=0;i<n2;i++){
    //     a3[i+n1]=a2[i];
    // }
    // for(int i=0;i<(n1+n2);i++){
    //     cout<<a3[i]<<" ";
    // }

    //with the help of set data structure
    set<int>st;
    for(int i=0;i<n1;i++){
        st.insert(a1[i]);
    }
    for(int i=0;i<n2;i++){
        st.insert(a2[i]);
    }
    int a3[st.size()];
    int i=0;
    for(auto it:st){
        a3[i]=it;
        i++;
    }
    for(int i=0;i<st.size();i++){
        cout<<a3[i]<<" ";
    }
        
}
int main(){
    int a1[]={1,1,2,3,4,5};
    int a2[]={2,3,4,4,5,6};
    int n1=sizeof(a1)/sizeof(a1[0]);
    int n2=sizeof(a2)/sizeof(a2[0]);
    unionofarray(a1,a2,n1,n2);
}