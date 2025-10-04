// Adding first file in github
// Brute Force Approach
// Time Complexity : O(n^2)
#include <iostream>
using namespace std;
#include <vector>

class Solution{
    public:
        vector<int> twoSum(vector<int> &nums, int target){
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};

int main()
{
    int n,target;
    cout << "Enter number of vector elements : ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter vector elements : ";
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    
    cout << "Enter target : ";
    cin >> target;
    
    Solution sol;
    vector<int> result = sol.twoSum(nums,target);
    
    if(!result.empty()){
        cout << "Indices : [" << result[0] << "," << result[1] << "]" << endl;
    }
    else{
        cout << "No Solutions" << endl;
    }
    
}

// Using Unordered Map
// Time Complexity : O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> mpp;
       for(int i=0;i<nums.size();i++){
        int need = target - nums[i];

        if(mpp.find(need) != mpp.end()){
            return {mpp[need],i};
        }
        mpp[nums[i]] = i;
       }
       return {};
    }
};