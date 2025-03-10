#include <iostream>
using namespace std;
 
int main(){
 
    int arr[10]={1,3,5,6,8,9,10,14,17,19};
    int target=17;
    int mid=0;

    int i=0,j=9;
    while(i<=j){
        mid=i + (j-i)/2;
        if(arr[mid]==target){
            cout<<"MIL GYA";
            break;
        }
        else if(target>arr[mid]){
            i=mid+1;
        }
        else{
            j=mid-1;
        }
    }
    return 0;
}