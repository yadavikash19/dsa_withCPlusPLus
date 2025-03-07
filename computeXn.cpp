#include <iostream>
using namespace std;

int main(){

    //If a number:- n So it has max to max log2n +1 digits not more than this
    //Like n=8- 1000(4 digits)- log2(8) is 3 and 3+1 is 4

    //Binary Exponentiation- it will give O(logn)
    double x;
    int n;
    double ans=1;
    cout<<"Enter number:- ";
    cin>>x;
    cout<<"Enter power:- ";
    cin>>n;

    long binForm=n;

    if(n==0) 
    cout<<"1.0";
    if(x==1) cout<<"1.0";
    if(x==0) cout<<"1.0";
    if(x==-1 && n%2==0) cout<<"1.0";
    if(x==-1 && n%2==1) cout<<"-1.0";
    
    if(n<0){
        x=1/x;
        binForm=-binForm;
    }

    while(binForm>0){
        if(binForm%2==1){
            ans=ans*x;
        }
        x=x*x;
        binForm=binForm/2;
    }
    cout<<ans;

    return 0;
}