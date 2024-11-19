// //TIME COMPLEXITY IS O(N)
 #include<iostream>
 using namespace std;
int main(){
// //     int a[]={1,2,4,8,13,18,21,24};
// //     int n=8;
// //     int x=20;
// //     for(int i=0;i<n;i++){
// //         if(a[i]>x){
// //             cout<<a[i-1];
// //             break;
// //         }
// //     }
// // } 

// //TIME COMLEXITY SAME AS BINARY SEARCH
   int a[]={1,2,4,5,6,9,13,24};
   int n=8;
   int x=13;
   int low=0;
    int high=n-1;
   bool flag=false;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(a[mid]==x){
            flag=true;
            cout<<a[mid-1];
           break;
       }
         else if(a[mid]<x) low=mid+1;
         else high=mid-1;
    }
    if(flag==false) cout<<a[high];
}  