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

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 2;

        while(i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }

        if(i >= 0) {
            int j = n - 1;
            while(nums[j] <= nums[i]) {
                j--;
            }
            swap(nums[i], nums[j]);
        }

        reverse(nums.begin() + i + 1, nums.end());
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