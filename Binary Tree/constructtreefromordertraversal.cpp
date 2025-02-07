#include<iostream>
#include<climits>
#include<queue>
using namespace std;
class Node{
    public:
    int val;
    Node*left;
    Node*right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* construct(int a[],int n){
    queue<Node*>q;
    Node*root=new Node(a[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        Node*temp=q.front();
        q.pop();
        Node*l;
        Node*r;
        if(a[i]!=INT_MIN) l=new Node(a[i]);
        else l=NULL;
        if(j!=n && a[j]!=INT_MIN) r=new Node(a[j]);
        else r=NULL;
        temp->left=l;
        temp->right=r;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        i+=2;
        j+=2;
    }
    return root;
}
void lorderbyqueue(Node*root){
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
        Node*temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);      
    }
}
int main(){
    int a[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9,INT_MIN};
    int n=sizeof(a)/sizeof(a[0]);
    Node*root=construct(a,n);
    lorderbyqueue(root);  
}
