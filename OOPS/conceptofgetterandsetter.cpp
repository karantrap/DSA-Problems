#include<iostream>
using namespace std;
class getterandsetter{
    private:
    int score,health;
    public:
    void setscore(int s){
        score=s;
    }
    void sethealth(int h){
        health=h;
    }
    int getscore(){
        return score;
    }
    int  gethealth(){
        return health;
    }
};
int main(){
    getterandsetter karan;
    karan.setscore(100);
    karan.sethealth(100);
    cout<<karan.getscore()<<endl;
    cout<<karan.gethealth();
    
}