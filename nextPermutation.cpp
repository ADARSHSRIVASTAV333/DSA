#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(1)
// Brute Force Approach: Using STL Function

class Solution{
    public:
        void nextPermutation(vector<int> &nums){
            next_permutation(nums.begin(),nums.end());
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