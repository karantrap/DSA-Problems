#include<iostream>
#include<climits>
using namespace std;
float max(float a,float b){
    if(a>b) return a;
    else return b;
}
float min(float a,float b){
    if(a<b) return a;
    else return b;
}
int main(){
    int a[]={5,2,10};
    int n=3;
    float kmin=(float)(INT_MIN);
    float kmax=(float)(INT_MAX);
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(a[i]>=a[i+1]){
            kmin=max(kmin,((a[i]+a[i+1])/2));
        }
        else{
            kmax=min(kmax,((a[i]+a[i+1])/2));
        }
        if(kmin>kmax){
            flag=false;
            break;
        }
    }
    if(flag==false) cout<<-1;
    else if(kmin==kmax){
        if(kmin-(int)kmin==0){
            cout<<kmin;
        }
        else cout<<-1;
    }
    else{
        if(kmin-(int)kmin>0){
            kmin=(int)kmin+1;
        }
        cout<<"range of k is: ["<<kmin<<","<<int(kmax)<<"]";
    }    

}