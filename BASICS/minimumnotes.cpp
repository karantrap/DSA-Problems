#include<iostream>
using namespace std;
int main(){
    int amount;
    cout<<"enter amount:";
    cin>>amount;
    int n1=0,n2=0,n5=0,n10=0,n20=0,n50=0,n100=0,n200=0,n500=0,n2000=0;
    while(amount>0){
        if(amount>=2000){
        n2000=amount/2000;// WE WILL GET NUMBER OF NOTES FROM HERE
        amount-=(2000*n2000);//REMAINING NOTES
        }
        if(amount>=500){
            n500=amount/500;
            amount-=(500*n500);
        }
        if(amount>=200){
            n200=amount/200;
            amount-=(200*n200);
        }
        if(amount>=100){
            n100=amount/100;
            amount-=(100*n100);
        }
        if(amount>=50){
            n50=amount/50;
            amount-=(50*n50);
        }
        if(amount>=20){
            n20=amount/20;
            amount-=(20*n20);
        }
        if(amount>=10){
            n10=amount/10;
            amount-=(10*n10);
        }
        if(amount>=5){
            n5=amount/5;
            amount-=(5*n5);
        }
        if(amount>=2){
            n2=amount/2;
            amount-=(2*n2);
        }
        if(amount>=1){
            n1=amount/1;
            amount-=(1*n1);
        }
    }
    cout<<n1+n2+n5+n10+n20+n50+n100+n200+n500+n2000;
}
