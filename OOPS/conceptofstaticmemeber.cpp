#include<iostream>
using namespace std;
void prints(){
    static int b=10; //IF I DO THIS WITH ONLY INT THEN VALUE WILL NOT UPDATE AND AS WE ARE CALLING PRINTS 3 TIMES SO IT WILL PRINT 10 THREE TIMES
    cout<<b<<endl;
    b++;
}
int main(){
    prints();
    prints();
    prints();

}