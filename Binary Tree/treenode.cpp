#include<iostream>
#include<algorithm>
#include<climits>
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
void display(Node*root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int sum(Node*root){  //sumofnodes
    if(root==NULL) return 0;
    int ans=root->val+sum(root->left)+sum(root->right);
    return ans;
}
int size(Node*root){
    if(root==NULL) return 0;
    int ans=1+size(root->left)+size(root->right);
    return ans;
}
int maxvalue(Node*root){
    if(root==NULL) return INT_MIN;
    int ans=max(root->val,max(maxvalue(root->left),maxvalue(root->right)));
    return ans;
}
int product(Node*root){
    if(root==NULL) return 1;
    int pro=root->val*product(root->left)*product(root->right);
    return pro;
}
int minvalue(Node*root){
    if(root==NULL) return INT_MAX;
    int ans=min(root->val,min(minvalue(root->left),minvalue(root->right)));
    return ans;
}
int main(){
    Node*a=new Node(-12);
    Node*b=new Node(2);
    Node*c=new Node(3);
    Node*d=new Node(4);
    Node*e=new Node(5);
    Node*f=new Node(6);
    Node*g=new Node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    display(a);
    cout<<endl; 
    cout<<sum(a)<<endl;
    cout<<size(a)<<endl;
    cout<<maxvalue(a)<<endl;
    cout<<product(a)<<endl;
    cout<<minvalue(a);
}