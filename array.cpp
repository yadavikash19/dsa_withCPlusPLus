#include <iostream>
using namespace std;

//Function for Pass by Reference 
void changeArr(int arr[], int size){
    for(int i=0; i<size; i++){
        arr[i]=arr[i]*2;
    }
}


int main(){

    //Finding max in array
    int marks[3]={10,-1,2};
    int max=0;
    
    for(int i=0; i<3; i++){
        if(max<marks[i]){
            max=marks[i];
        }
    }
    cout<<max<<endl;

    //Finding min in array (INT_MAX??)
    int min=marks[0];
    for(int i=0; i<3; i++){
        if(min>marks[i]){
            min=marks[i];
        }
    }
    cout<<min<<endl;

    //Pass by reference- Array ka starting address- Array ka naam store krta hai, Array khud e pointer hota h
    changeArr(marks,3);
    for(int i=0; i<3; i++){
        cout<<marks[i]<<" ";
    }
    cout<<endl;

    //Reverse an Array- Without making any copy- DO in array itself
    int arr[7]={1,2,3,4,5,6,7};
    int i=0;
    int j=sizeof(arr)/sizeof(arr[0]);

    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j-1];
        arr[j-1]=temp;
        i++;
        j--;
    }
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Printing all unique value of array
    int arr2[12]={1,1,2,3,2,4,5,3,6,7,8,7};
    int count=0;

    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            if(arr2[i]==arr2[j]){
                count++;
            }
        }
        if(count==1){
            cout<<arr2[i];
        }
        count=0;
    }

    //Intersection of 2 array

    return 0;
}