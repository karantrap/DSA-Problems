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
int levels(Node*root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
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
Node* construct(int a[],int n){ //BFS VVIMP
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
void levelorder(Node*root){
    int n=levels(root);
    for(int i=1;i<=n;i++){
        nthlevel(root,1,i);
        cout<<endl;
    }
} 
//boundary traversal 
void leftBoundary(Node*root){ //to print left boundary
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left==NULL) leftBoundary(root->right);
}  
void bottomBoundary(Node*root){ //to print leaf nodes
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) cout<<root->val<<" ";
    bottomBoundary(root->left);   
    bottomBoundary(root->right);  
}        
void rightBoundary(Node*root){ //to print right boundary in reverse order
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    rightBoundary(root->right);
    if(root->right==NULL) rightBoundary(root->left);
    cout<<root->val<<" ";
}  
void boundary(Node*root){
    leftBoundary(root);
    bottomBoundary(root);
    rightBoundary(root->right);
} 
int main(){
    int a[]={1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,29,INT_MIN,INT_MIN,28,INT_MIN,INT_MIN};
    int n=sizeof(a)/sizeof(a[0]);
    Node*root=construct(a,n);
    levelorder(root);
    cout<<endl;
    //output
    boundary(root);
}