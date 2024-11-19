#include<iostream>
using namespace std;
class book{
    public:
    char name;
    int price;
    int pages;
    int countbooks(int p){
        if(price<p) return pages;
        else return 0;
    }
    bool isbookpresent(char book){
        if(name==book) return true;
        else return false;
    }
};
int main(){
    book harrypotter;
    harrypotter.name='A';
    harrypotter.price=1000;
    harrypotter.pages=500;
    cout<<harrypotter.countbooks(1200)<<endl;
    cout<<harrypotter.isbookpresent('A');
}