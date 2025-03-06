#include <iostream>
using namespace std;

int main(){
    int a=4,b=8;
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(a^b)<<endl;

    //Bitwise Left N Right Shift Operators
    // << is Bitwise Left Shift- any num get shifted to left by required places and rightmost empty places will get fill by 1
    // a << b is a * 2 to power b

    // >> is Bitwise Right Shift- any num get shifted to right by required places and rightmost will get removed
    // a >> b is a / 2 to power b

    cout<<(9<<1)<<endl;
    cout<<(11>>1)<<endl;


    return 0;
}