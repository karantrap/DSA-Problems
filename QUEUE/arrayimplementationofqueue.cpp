#include<iostream>
#include<vector>
using namespace std;
class Queue{
    public:
    int f;
    int b;
    int s;
    vector<int>arr;
    Queue(int val){
        f=0;
        b=0;
        s=0;
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
        s++;
    }

    //IMPLEMENTING POP
    void pop(){
        if(s==0){
            cout<<"queue is empty";
            return;
        }
        f++;
        s--;
    }

    //IMPLEMENTING FRONT
    int front(){
        if(s==0){
            cout<<"queue is empty";
            return -1;
        }
        return arr[f];
    }

    //IMPLEMENTING BACK
    int back(){
        if(s==0){
            cout<<"queue is empty";
            return -1;
        }
        return arr[b-1];
    }

    //IMPLEMENTING SIZE  
    int size(){
        return s;
    }

    //IMPLEMENTING EMPTY
    bool empty(){
        if(s==0) return true;
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
    q.push(50);
    q.display();
    q.push(60);
    q.display();
    q.pop();
    q.display();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.front();
}



