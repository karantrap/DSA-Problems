#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int No_of_rooms(vector<vector<int>>&v){
    vector<int>start,end;
    for(int i=0;i<v.size();i++){
        start.push_back(v[i][0]);
        end.push_back(v[i][1]);
    }
    sort(start.begin(),start.end());
    sort(end.begin(),end.end());
    int i=0;
    int j=0;
    int rooms=0;
    int ans=INT_MIN;
    while(i<start.size() && j<end.size()){
        if(start[i]<end[j]){
            rooms++;
            ans=max(ans,rooms);
            i++;
        }
        else if(end[j]<start[i]){
            rooms--;
            j++;
        }
        else{
            j++;
            i++;
        }
    }
    return ans;
}
int main(){
    vector<vector<int>>v={{1,10},{2,7},{3,19},{8,12},{10,20},{11,30}};
    cout<<No_of_rooms(v);
}