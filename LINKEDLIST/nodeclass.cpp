#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
};
int main(){
    // 10 20 30 40
    Node a;
    a.val=10;
    Node b;
    b.val=20;
    Node c;
    c.val=35;
    Node d;
    d.val=235;

    //forming ll
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=NULL;    //IF YOU WANT TO CHNG THE VALUE OF B THEN USE PTR LIKE NODE*ptr=&b and then do  (*ptr).val=67; or ptr->val=67
    // cout<<((a.next)->next)->val<<endl; //a.next mtlb b ka address;
    // cout<<(((a.next)->next)->next)->val;
    Node temp=a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp=*(temp.next);
    }
}