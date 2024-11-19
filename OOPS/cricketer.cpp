#include<iostream>
using namespace std;
class cricketer{
    public:
    char name;
    int age;
    int matches,avgruns;
};
int main(){
    cricketer rohit;
    rohit.name='R';
    rohit.age=37;
    rohit.matches=200;
    rohit.avgruns=13000;

    cricketer virat;
    virat.name='V';
    virat.age=36;
    virat.matches=202;
    virat.avgruns=14000;

    cricketer cricketers[2]={rohit,virat};
    for(int i=0;i<2;i++){
        cout<<cricketers[i].age<<endl;
        cout<<cricketers[i].name<<endl;
        cout<<cricketers[i].matches<<endl;
        cout<<cricketers[i].avgruns<<endl;
    }
    

}