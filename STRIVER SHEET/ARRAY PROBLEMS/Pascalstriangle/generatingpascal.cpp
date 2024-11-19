#include<iostream>
#include<vector>
using namespace std;
vector<int>generaterow(int row){
    long long ans=1;
    vector<int>ansrow;
    ansrow.push_back(1);
    for(int col=1;col<row;col++){
        ans=ans*(row-col);
        ans=ans/(col);
        ansrow.push_back(ans);
    }
    return ansrow;
}
void display(vector<vector<int>>& triangle) {
    for (int i = 0; i < triangle.size(); i++) {
        for (int j = 0; j < triangle[i].size(); j++) {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cout<<"enter rows:";
    cin>>n;
    vector<vector<int>>pascaltriangle(int n);
    vector<vector<int>>ans;
    for(int i=1;i<=n;i++){
        ans.push_back(generaterow(i));
    }
    display(ans);
}