#include <iostream>
using namespace std;

int main(){

    // Opearators :- Precedence
    // !,++,--    :- R to L
    // *,/,%      :- L to R
    // +,-        :- L to R
    // <,<=,>=,>  :- L to R
    // ==,!=      :- L to R
    // &&         :- L to R
    // ||         :- L to R
    // =          :- R to L

    // piroblem:-
    int a=4;
    cout<< ++a + a++<<endl;
    a=4;
    cout<< ++a + ++a<<endl;
    a=4;
    cout<< a++ + ++a<<endl;
    a=4;
    cout<< a++ + a++<<endl;
    

    //------------------------
    // Scope:- is the area where variable can be access or use
    // Local Scope:- Variables defined in if/else, functions, block of code

    // if(4>3){
    //     int x=7;
    // }
    // cout<<x;
    // ERROR:- 'x' was not declared in this scope

    // Global Scope:-  

    //------------------------
    // Data Type Modifiers- change meaning of data types
    // long
    // short
    // long long
    // signed- can store both +ve and -ve integers
    // unsigned- only positive

    cout<<"Size of int is :- "<<sizeof(int)<<endl;
    cout<<"Size of short int is :- "<<sizeof(short int)<<endl;
    cout<<"Size of long int is :- "<<sizeof(long int)<<endl;
    cout<<"Size of long long int is :- "<<sizeof(long long int)<<endl;
    cout<<"Size of signed int is :- "<<sizeof(signed int)<<endl;
    cout<<"Size of unsigned int is :- "<<sizeof(unsigned int)<<endl;




    


    return 0;
}