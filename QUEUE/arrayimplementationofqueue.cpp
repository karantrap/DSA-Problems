#include<iostream>
#include<vector>
using namespace std;
class Queue{
    public:
    int f;
    int b;
    vector<int>arr;
    Queue(int val){
        f=0;
        b=0;
        vector<int>v(val); 
        arr=v;     
    }
    //IMPLEMENTING PUSH  

    void push(int val){
        if(b==arr.size()){
            cout<<"queue is full"<<endl;
            return;
        }     
        arr[b]=val;
        b++;
    }

    //IMPLEMENTING POP
    void pop(){
        if(b-f==0){
            cout<<"queue is empty";
            return;
        }
        f++;
    }

    //IMPLEMENTING FRONT
    int front(){
        if(b-f==0){
            cout<<"queue is empty";
            return -1;
        }
        return arr[f];
    }

    //IMPLEMENTING BACK
    int back(){
        if(b-f==0){
            cout<<"queue is empty";
            return -1;
        }
        return arr[b-1];
    }

    //IMPLEMENTING SIZE  
    int size(){
        return b-f;
    }

    //IMPLEMENTING EMPTY
    bool empty(){
        if(b-f==0) return true;
        else return false;
    }

    //IMPLEMENTING DISPLAY->HERE WE R NOT DISPLAYING WHOLE ARRAY,DISPLAYING ONLY QUEUE
    void display(){
        for(int i=f;i<=b-1;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Queue q(5);
    q.push(10); 
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.push(50);
    q.push(60);
    q.display();
    q.pop();
    q.display();
    cout<<q.front()<<endl;
    cout<<q.back();
}



