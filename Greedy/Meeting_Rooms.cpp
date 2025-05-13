#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
bool canAttendMeeting(vector<vector<int>>&v){
    vector<int>start,end;
    for(int i=0;i<v.size();i++){
        start.push_back(v[i][0]);
        end.push_back(v[i][1]);
    }
    sort(start.begin(),start.end());
    sort(end.begin(),end.end());
    int i=0,j=0;
    int rooms=0;
    int ans=INT_MIN;
    while(i<start.size() && j<end.size()){
        if(start[i]<end[j]){
            rooms++;
            i++;
            ans=max(ans,rooms);
        }
        else if(end[j]<start[i]){
            rooms--;
            j++;
        }
        else{
            i++;
            j++;
        }
    }
    return ans==1;
}
int main(){
    vector<vector<int>>v={{7,10},{2,4}};
    cout<<canAttendMeeting(v);
}