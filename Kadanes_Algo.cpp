#include <iostream>
using namespace std;

int main(){
    //Subarray- It is a continous part of an array
    //Formula- n*(n+1)/2
    int arr[5]={1,2,3,4,5};

    for(int i=0; i<5; i++){
        for(int j=i; j<5; j++){
            for(int start=i; start<=j; start++){
                cout<<arr[start];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    //Maximum Subarray Sum
    //Brute Force Approach 
    //By O(n2) instead of O(n3)
    int arr2[7]={3,-4,5,4,-1,7,-8};

    int max=arr2[0];
    int sum=0;
    for(int i=0; i<5; i++){
        for(int j=i; j<5; j++){
            sum=sum+arr[j];
            if(max<sum){
                max=sum;
            }
        }
        sum=0;
    }
    cout<<max;
    cout<<endl;
    cout<<endl;

    //Kadane's Algorithm
    // Most Optimised
    int arr3[7]={-1,-2,-3,-4,-5,-6,-7};

    int MAX=arr3[0],current_sum=0;

    for(int i=0; i<7; i++){
        current_sum= current_sum +arr3[i];
        if(MAX<current_sum){
            MAX=current_sum;
        }
        if(current_sum<0){
            current_sum=0;
        }
    }
    cout<<MAX;

    return 0;
}