#include<iostream>
using namespace std;
class calculator{
    public : //data members if i will do this as private then it will give the garbage value
    int x;
    int y;
    public:
    void add(){ //member function
        cout<<x+y<<endl;
    }
    void subtract(){ //member function
        cout<<x-y;
    }
};
int main(){
    calculator calci;
    calci.x=23;
    calci.y=21;
    calci.add();
    calci.subtract();
}