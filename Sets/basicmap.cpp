#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int>mp;
    //to insert element in map we have to use pair

    // pair<string,int>p1;
    // p1.first="john";
    // p1.second=21;
    // pair<string,int>p2;
    // p2.first="jipsy";
    // p2.second=23;
    // mp.insert(p1);
    // mp.insert(p2);

    //OR THE OTHER WAY TO INSERT ELEMENT IS

    mp["john"]=21;
    mp["jipsy"]=24;  


    // for(pair<string,int> p:mp) cout<<p.first<<" "<<p.second<<endl; (ONE WAY OF DOING IT)
    for(auto p:mp) cout<<p.first<<" "<<p.second<<endl; 

    //if i want to delete any element from the map then 
    mp.erase("john");
    
    for(auto p:mp) cout<<p.first<<" "<<p.second<<endl;
}