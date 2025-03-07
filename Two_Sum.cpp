#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target){
    int i = 0, j = 0;
    vector<int> ans;
    bool check = false;
    for (i = 0; i < nums.size(); i++){
        for (j = i + 1; j < nums.size(); j++){
            if (nums[i] + nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main(){

    vector<int> nums = {2, 9, 7, 15}; // Use vector instead of an array
    int target = 9;

    vector<int> result = twoSum(nums, target);
    cout<<result[0]<<" "<<result[1];
    cout<<endl;
    cout<<endl;

    //Return pair in sorted array with target sum
    int arr[6]={2,4,6,9,10,12}, t=15;
    int sum=0;
    int i=0,j=sizeof(arr)/sizeof(arr[0]);
    while(i<j){
        sum=arr[i]+arr[j];
        if(sum<t){
            i++;
        }
        else if(sum>t){
            j--;
        }
        else{
            cout<<i<<" "<<j<<endl;
            break;
        }
    }

    return 0;
}