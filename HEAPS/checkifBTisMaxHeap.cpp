#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int val;
    Node*left;
    Node*right;
    Node(int val){
        this->val=val;
        left=right=NULL;
    }
};
int sizeofTree(Node*root){
    if(root==NULL) return 0;;
    return 1+sizeofTree(root->left)+sizeofTree(root->right);
}
bool isCBT(Node*root){
    int size=sizeofTree(root);
    queue<Node*>q;
    int count=0;
    q.push(root);
    while(count<size){
        Node*temp=q.front();
        q.pop();
        count++;
        if(temp!=NULL) q.push(temp->left);
        if(temp!=NULL) q.push(temp->right);
    }
    if(q.size()>0){
        Node*temp=q.front();
        if(temp!=NULL) return false;
        q.pop();
    }
    return true;
}
bool isMaxHeap(Node*root){
    if(root==NULL) return true;
    if(root->left!=NULL && root->val<root->left->val) return false;
    if(root->right!=NULL && root->val<root->right->val) return false;
    return isMaxHeap(root->left) && isMaxHeap(root->right);
}
int main(){
    Node*a=new Node(20);
    Node*b=new Node(15);
    Node*c=new Node(11);
    Node*d=new Node(8);
    Node*e=new Node(10);
    Node*f=new Node(6);
    a->left=b;a->right=c;
    b->left=d;b->right=e;
    e->left=f;
    if(isMaxHeap(a) && isCBT(a)) cout<<"tree is maxheap";
    else cout<<"tree is not maxheap";
}