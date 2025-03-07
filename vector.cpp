#include <iostream>
#include <vector>
//#include <bits/c++.h>
using namespace std;

int main(){

    //VECTOR- Dynamic in nature
    //STL- Standard Template Library- like a toolbox that contains implimentation code of various data structures like Stacks, Queue, HashTable
    //vector, queue, stack, set are STL containers- means container kisi na kisi type ke data ko store karane ke liye

    //To run in VS Code Terminal- g++ -std=c++11 vector.cpp -o output; ./output.exe

    //Vector Syntax
    vector<int>vec; //0 //this done at Compile time
    // cout<<vec[0];

    vector<int> vec2={1,2,3};
    cout<<vec2[0]<<endl;

    vector<int> vec3(3,4);
    cout<<vec3[0]<<endl;
    cout<<vec3[1]<<endl;
    cout<<vec3[2]<<endl;

    //for each loop
    for(int i: vec3){
        cout<<i<<endl;
    }
    // ALSO:-
    // for(int i=0;i<3;i++){
    //     cout<<vec3[i];
    // }

    //Vector Functions
    //Size
    cout<<"Size of Vec3 is:- "<<vec3.size()<<endl;
    //push_back
    vec3.push_back(25); //Done at Run Time
    cout<<"Size of Vec3 after push_back is:- "<<vec3.size()<<endl;
    //pop_back
    vec3.pop_back();
    cout<<"Size of Vec3 after pop_back is:- "<<vec3.size()<<endl;
    //front
    cout<<"Value at front of Vec3 is:- "<<vec3.front()<<endl;
    //back
    cout<<"Value at back of Vec3 is:- "<<vec3.back()<<endl;
    //at
    cout<<"Value at [2]index of Vec3 is:- "<<vec3.at(2)<<endl;

    //Statis vs Dynamic Allocation
    //Dynamic memory allocation is done in heap memory n static in stack
    //vector is internally is array, afte every push_back or pop_back new vec is created every time n old one get deleted every time

    //if a vec is vector<int>vec4; -- capacity gets double of size after every push_back only when complete previous gets completely fill
    vector<int>vec4;
    vec4.push_back(1);
    vec4.push_back(2);
    vec4.push_back(3);
    vec4.push_back(4);
    vec4.push_back(5);

    cout<<vec4.size()<<endl;
    cout<<vec4.capacity()<<endl;

    //Problem- Single Number
    //SOLVED



    return 0;
}