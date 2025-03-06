#include <iostream>
using namespace std;

int main(){

    int a;
    int n=0,d=1;
    cout<<"Enter number:- ";
    cin>>a;

    while(a>0){
        n= n*10 + a%10;
        a= a/10;
    }
    cout<<n;

    return 0;
}