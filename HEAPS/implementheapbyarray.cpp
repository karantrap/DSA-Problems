#include<iostream>
using namespace std;
class MinHeap{
    public:
    int arr[50];
    int idx; //cannot assign value directly
    MinHeap(){
        idx=1;
    }
    int top(){
        return arr[1];
    }
    void push(int x){
        arr[idx]=x;
        int i=idx;
        idx++;
        while(i!=1){
            int parent=i/2;
            if(arr[i]<arr[parent]) swap(arr[i],arr[parent]);
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
            if(left>idx-1) break; //loop breaking condition
            else{
                if(arr[right]<arr[i]){
                    swap(arr[i],arr[right]);
                    i=right;
                }
                break;
            }
            if(arr[left]<arr[right]){
                if(arr[left]<arr[i]){
                    swap(arr[i],arr[left]);
                    i=left;
                }
                else break;
            }
            else{
                if(arr[right]<arr[i]){
                    swap(arr[i],arr[right]);
                    i=right;
                }
                else break;
            }
        }
    }
    int size(){
        return idx-1;
    }
    void display(){
        for(int i=1;i<=idx-1;i++) cout<<arr[i]<<" ";
    }
};
int main(){
    MinHeap pq;
    pq.push(10);
    pq.push(20);
    pq.push(11);
    pq.push(30);
    pq.push(40);
    pq.push(4);
    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    pq.display();
}