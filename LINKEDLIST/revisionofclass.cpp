#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    float marks;
    Student(string name,int rno,float marks){
        this->name=name;
        this->rno=rno;
        this->marks=marks;
    }
};
int main(){
    Student s("pole",43,98); // Student *ptr=new Student("pole",43,98);
    Student * ptr=&s;
    (*ptr).name="karan"; //ptr->name="jngjge";
    cout<<s.name;
}