#include <iostream>
using namespace std;

int square(int *p){
    *p=*p * *p;
}
 
int main(){
 
    // Memory Addresses- 
    int a=10;
    //Adress of a is in hexa decimal
    cout<<&a<<endl; //0x61ff0c

    // *:- dereference operator

    int *ptr=&a;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;
    //----------------------------------------------

    int b = 11;
    int *ptrb = &b;
    int **pptrb = &ptrb; // Corrected the variable name

    cout << **pptrb<<endl; 
    //----------------------------------------------
    cout<< *pptrb<<endl;
    cout<< ptrb<<endl;

    //----------------------------------------------
    //Pass by reference- By Pointer & references(alias)
    int c=4;
    square(&c);
    cout<<c<<endl;

    //----------------------------------------------
    int arr[5]= {1,2,3,4,5};
    // Name of our array is actually pointer in C++, this always points to 0th index of our array and it is a constant pointer

    int A=15;
    // arr=A; //Not possible and giving error- expression must be a modifiable lvalue

    //Pointer Arithmetics
    //Increment and decrement- ++ptr and ptr++
    int *Aptr=&A;
    cout<<Aptr<<endl;
    cout<< ++Aptr<<endl; // +4 bits:- 0x61fedc + 4 = 0x61fee0
    cout<<++Aptr<<endl;

    //Add/ Subtract by Number
    cout<< Aptr + 1<<endl;
    cout<< Aptr - 1<<endl;
    //Same like this-
    int arr2[5]= {1,2,3,4,5};
    cout<< *arr2<<endl;
    cout<< *(arr2 + 1)<<endl;
    cout<< *(arr2 + 2)<<endl;
    cout<< *(arr2 + 3)<<endl;
    cout<< *(arr2 + 4)<<endl;

    //Substract Pointer- but we can only sub same type of ptr and it gives us number of blocks of type(int)
    cout<<Aptr<<endl;
    cout<< Aptr- ++Aptr<<endl; // -1

    // We can also apply relational operations on ptr- (<, <=, >, >=, ==, !=)

    
    return 0;
}