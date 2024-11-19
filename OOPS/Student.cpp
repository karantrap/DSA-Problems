#include<iostream>
using namespace std;
class Student{
    public:
    int rollno;
    long long mobno;
    string name;
};
int main(){
    Student harry;
    harry.rollno=12;
    harry.mobno=832830887;
    harry.name="odbn";
    cout<<harry.rollno<<" "<<harry.mobno<<" "<<harry.name;
}