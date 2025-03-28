#include<iostream>
using namespace std;
class MaxHeap{
    public:
    int arr[50];
    int idx;
    MaxHeap(){
        idx=1;
    }
    void push(int x){
        arr[idx]=x;
        int i=idx;
        idx++;
        while(i!=1){
            int parent=i/2;
            if(arr[i]>arr[parent]){
                swap(arr[i],arr[parent]);
            }
            else break;
            i=parent;
        }
    }
    void pop(){
        idx--;
        arr[1]=arr[idx];
        //rearrangement
        int i=1;
        while(true){
            int left=2*i,right=2*i+1;
            if(left>idx-1) break;
            else{
                if(arr[right]>arr[i]){
                    swap(arr[i],arr[right]);
                    i=right;
                    break;
                }
                else break;
            }
            if(arr[left]>arr[right]){
                if(arr[left]>arr[i]){
                    swap(arr[i],arr[left]);
                    i=left;
                    break;
                }
                else break;
            }
            else{
                if(arr[right]>arr[i]){
                    swap(arr[i],arr[right]);
                    i=right;
                    break;
                }
                else break;
            }
        }
    }
    int top(){
        return arr[1];
    }
    int size(){
        return idx-1;
    }
    void display(){
        for(int i=1;i<=idx-1;i++) cout<<arr[i]<<" ";
    }
};
int main(){
    MaxHeap pq;
    pq.push(10);
    pq.push(20);
    pq.push(11);
    pq.push(30);
    pq.push(40);
    pq.push(4);
    pq.display();
    cout<<endl;
    cout<<pq.top();
}