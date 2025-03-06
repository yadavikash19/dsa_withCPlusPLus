#include <iostream>
using namespace std;

int binary(int b){

    int n=0,d=1;
    while(b>0){
    
        n=n+ (b%2)*d;
        d=d*10;
        b=b/2;
    }
    return n;
}
int main()
{
    int a,n=0,d=1;

    cout<<"Enter the number upto which u want to get binary values :- "<<endl;
    cin>>a;

    for(int i=0; i<=a; i++){
        cout<<binary(i);
        cout<<endl;
    }

    return 0;
}