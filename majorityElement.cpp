#include <iostream>
using namespace std;

int main(){

    int arr[15]={3,2,3,5,3,4,3,1,3,2,3,7,3,2,3};
    int freq=0,ans=0;

    for(int i=0; i<15; i++){
        if(freq==0){
            ans=arr[i];
        }
        if(ans==arr[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    cout<<ans;

    return 0;
}