#include <iostream>
using namespace std;

int main(){

    int a;
    cout<<"enter :- ";
    cin>> a;
    
    if( (a&(a-1)) == 0){
        cout<<"YES!! Number is Power of 2";
    }
    else{
        cout<<"NO!! Number is not Power of 2";
    }

    return 0;
}
