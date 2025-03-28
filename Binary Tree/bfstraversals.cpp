#include<iostream>
#include<climits>
#include<algorithm>
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
void display(Node*root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int level(Node*root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}
void nthlevel(Node*root,int currlevel,int level){
    if(root==NULL) return;
    if(currlevel==level){
        cout<<root->val<<" ";
        return;
    }
    nthlevel(root->left,currlevel+1,level);
    nthlevel(root->right,currlevel+1,level);
}
//LEVEL ORDER TRAVERSAL
void levelorder(Node*root){
    int n=level(root);
    for(int i=1;i<=n;i++){
        nthlevel(root,1,i);
        cout<<endl;
    }
}
//LEVEL ORDER TRAVERSAL FROM RIGHT TO LEFT

void nthlevel2(Node*root,int currlevel,int level){
    if(root==NULL) return;
    if(currlevel==level){
        cout<<root->val<<" ";
        return;
    }
    nthlevel2(root->right,currlevel+1,level);
    nthlevel2(root->left,currlevel+1,level);
}
void levelorder2(Node*root){
    int n=level(root);
    for(int i=1;i<=n;i++){
        nthlevel2(root,1,i);
        cout<<endl;
    }   
} 


//LEVEL ORDER TRAVERSAL USING QUEUE (BFS)
void lorderbyqueue(Node*root){
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
        Node*temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp-> right);
    }
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
    display(a);
    cout<<endl;
    nthlevel(a,1,3);
    cout<<endl;
    levelorder(a);
    cout<<endl;
    cout<<endl;
    levelorder2(a);
    cout<<endl;
    cout<<endl;
    lorderbyqueue(a); 
}