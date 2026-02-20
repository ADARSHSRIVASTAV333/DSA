#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(1)
// Brute Force Approach: Using STL Function

class Solution{
    public:
        void nextPermutation(vector<int> &nums){
            next_permutation(nums.begin(),nums.end());  // STL function to get the next permutation of the given array
        }
};

// Time Complexity : O(n)
// Space Complexity : O(1)
// Optimal Approach: Using the following steps:
// 1. Find first decreasing element from right (pivot).
// 2. Swap it with the next greater element on the right.
// 3. Reverse the suffix to get the next permutation.

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 2;

        while(i >= 0 && nums[i] >= nums[i + 1]) {  // Find the first decreasing element from the right
            i--;
        }

        if(i >= 0) {                        // If such an element exists
            int j = n - 1;
            while(nums[j] <= nums[i]) {     // Find the next greater element to the right of the pivot
                j--;
            }
            swap(nums[i], nums[j]);         // Swap the pivot with the next greater element
        }

        reverse(nums.begin() + i + 1, nums.end());       // Reverse the suffix to get the next permutation
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for(auto &val : nums){
        cin >> val;
    }
    Solution obj;
    obj.nextPermutation(nums);
    for(auto &val : nums){
        cout << val << " ";
    }
}