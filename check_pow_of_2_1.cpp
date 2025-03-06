#include <iostream>
using namespace std;

int main(){

    int a;
    cout<<"enter :- ";
    cin>> a;
    bool value=true;

    while(a>0){
        if(a==1){
            value=true;
            break;
        }
        a=a/2;
    }
    if(value){
        cout<<"YES!! Number is Power of 2";
    }
    else{
        cout<<"NO!! Number is not Power of 2";
    }

    return 0;
}