#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
	unordered_set<int>s;
	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.insert(4);
	s.insert(5);
	//for each loop it directly prints the element
	for(int ele:s) cout<<ele<<" ";
	//to find any target we use find 

	//s.find()-> it searches the element and if not found then return the last element of set
	int target=4;
	cout<<endl;
	if(s.find(target)!=s.end()){ //it means target exists
		cout<<"element exists";
	}
	else cout<<"does not exist";

	//s.erase() is used to remove element from set
	cout<<endl;
	s.erase(3);
	for(int ele:s) cout<<ele<<" ";

}
