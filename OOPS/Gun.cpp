//HERE IN THIS CODE WE HAVE UNDERSTAND THE LITTLE CONCEPT OF THIS KEYWORD 
#include<iostream>
#include<algorithm>
using namespace std;
//HERE WE ARE GOING TO UNDERSTAND THE NESTED CLASS CONCEPT
class Gun{
    public:
    int ammo;
    int damage;
    int scope;
    
};
class Player{
    private:
    int score,health;
    bool alive;
    Gun gun;
    //MAKING NEW CLASS INTO IT
    public:
    int getscore(){
        return score;
    }
    int gethealth(){
        return health;
    }
    int getalive(){
        return alive;
    }
    Gun getgun(){
        return gun;
    }
    void setgun(Gun gun){
        this->gun=gun;
    }
    void setScore(int score){
        this->score=score; // or we can write this "Player::score=score" instead of using "this" keyword;
    }
    void setHealth(int health){
        this->health=health;
    }
    void setAlive(bool alive){
        this->alive=alive;
    }

};
Player getmaxscore(Player a,Player b){
    if(a.getscore() > b.getscore()) return a;
    else return b;
}
int add(int a,int b){
    if(a>b) return a;
    else return b;
}
int main(){
    Player kashish;
    Player ayush;


    Gun akm;

    akm.ammo=100; //since public mode m define kiya h to = dekr value do
    akm.damage=50;
    akm.scope=2;

    Gun M416;
    M416.ammo=130;
    M416.damage=129;
    M416.scope=3;

    kashish.setScore(100);
    kashish.setgun(akm);
    kashish.setHealth(100);
    kashish.setAlive(true);
    ayush.setScore(200);
    ayush.setHealth(200);

    ayush.setAlive(true);

    ayush.setgun(M416);


    cout<<add(10,20);
    Player san=getmaxscore(ayush,kashish);// we cannot directly cout the player so one solution is to store in it an another player like
    cout<<san.getscore()<<endl;
    cout<<san.gethealth()<<endl;
    int a=10;
    int *b=&a;
    cout<<b<<endl;//this will give the address
    cout<<*b<<endl;//this will give the value of a  



    //UNDERSTANDING THE CONCEPT OF POINTERS
    Player *trapti=new Player;//SO THIS IS HOW WE WILL INTIALSIZE THE POINTER AND TO SET IT AS AN OBJ WE USE '->'
    Player *karan=new Player;//"->" OPERATOR IS USED TO GET THE VALUE FROM THE ADDRESS
    trapti->setScore(100);
    trapti->setHealth(100);
    karan->setScore(100);
    karan->setHealth(100);
    cout<<trapti->getscore()<<endl;
    cout<<karan->getscore();

    Gun sam=kashish.getgun(); //here we have created another object for gun in order to print the deatils of kashish's gun
    cout<<sam.ammo<<endl;
    cout<<sam.damage<<endl;
    cout<<sam.scope<<endl;
}