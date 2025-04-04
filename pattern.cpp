#include <iostream>
using namespace std;
 
int main(){

    // int n=5;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         if(j<n-i-1) cout<<" "<<" ";
    //         else cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }
    //         * 
    //       * *
    //     * * *
    //   * * * *
    // * * * * *

    int n=5;
    for(int i=0; i<n; i++){
        for(int j=0; j<2*n-1; j++){
            if(j<n-i-1 || j>n+i-1){
                cout<<" "<<" ";
            }
            else{
                cout<<"*"<<" ";
            }
            
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    for(int i=-1; i<n-1; i++){
        for(int j=0; j<2*n-1; j++){
            if(j<n-i-1 || j>n+i-1){
                cout<<"*"<<" ";
            }
            else{
                cout<<" "<<" ";
            }
            
        }
        cout<<endl;
    }
    //         *
    //       * * *       
    //     * * * * *     
    //   * * * * * * *   
    // * * * * * * * * * 


    // * * * * * * * * * 
    // * * * *   * * * * 
    // * * *       * * * 
    // * *           * * 
    // *               * 

    cout<<endl;
    cout<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<2*n-1; j++){
            if(j<i || j>2*n-i-2){
                cout<<" "<<" ";
            }
            else{
                cout<<"*"<<" ";
            }
            
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    for(int i=1; i<n+1; i++){
        for(int j=0; j<2*n-1; j++){
            if(j<i || j>2*n-i-2){
                cout<<"*"<<" ";
            }
            else{
                cout<<" "<<" ";
            }
            
        }
        cout<<endl;
    }

    // * * * * * * * * *
    //   * * * * * * *
    //     * * * * *
    //       * * *       
    //         *


    // *               *
    // * *           * *
    // * * *       * * *
    // * * * *   * * * *
    // * * * * * * * * *
    
 
    return 0;
}