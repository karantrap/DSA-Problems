#include<iostream>
#include<stack>
#include<queue>
#include<unordered_map>
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
Node*construct(int arr[],int n){
    queue<Node*>q;
    Node*root=new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        Node*temp=q.front();
        q.pop();
        Node*l;
        Node*r;
        if(arr[i]!=INT_MIN) l=new Node(arr[i]);
        else l=NULL;
        if(j!=n && arr[j]!=INT_MIN) r=new Node(arr[j]);
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

void topview(Node*root){
    unordered_map<int,int>mp;  //<level,root->val>
    queue< pair<Node*,int>>q;//<Node,level>
    pair<Node*,int>r;
    r.first=root;
    r.second=0;
    q.push(r);
    while(q.size()>0){
        Node*temp=(q.front()).first;
        int level=(q.front()).second;
        q.pop();
        if(mp.find(level)==mp.end()) {    //if level does not exist then out it in map
            mp[level]=temp->val;
        } 
        if(temp->left!=NULL){
            pair<Node*,int>p;
            p.first=temp->left;
            p.second=level-1;
            q.push(p);
        }
        if(temp->right!=NULL){
            pair<Node*,int>p;
            p.first=temp->right;
            p.second=level+1;
            q.push(p);
        }
        int minLevel=INT_MAX;
        int maxLevel=INT_MIN;
        for(auto x:mp){
            int level=x.first;
            minLevel=min(minLevel,level);
            maxLevel=max(maxLevel,level);
        }
        for(int i=minLevel;i<=maxLevel;i++){
            cout<<mp[i]<<" ";
        } 
    }
}

int main(){
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,7,8,INT_MIN};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node*root=construct(arr,n);
    levelorder(root);
    topview(root);
} 