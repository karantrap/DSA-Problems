#include<iostream>
#include<climits>
#include<algorithm>
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
int level(Node*root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}
int main(){
    Node*a=new Node(1);
    Node*b=new Node(7);
    Node*c=new Node(9);
    Node*d=new Node(2);
    Node*e=new Node(6);
    Node*f=new Node(5);
    Node*g=new Node(11);
    Node*h=new Node(9);
    Node*i=new Node(5);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    e->left=f;
    e->right=g;
    c->right=h;
    h->right=i;
    int k=3;
}