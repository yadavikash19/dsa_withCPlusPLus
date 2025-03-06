#include <iostream>
using namespace std;

int main(){

    int a=1010;
    int n=0,pow=1;

    while(a>0){
        n=n+(a%10)*pow;
        pow=pow*2;
        a=a/10;

    }
    cout<<n;

    return 0;
}