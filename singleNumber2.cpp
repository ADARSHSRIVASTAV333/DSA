#include<bits/stdc++.h>
using namespace std;

// time complexity : O(n)
// space complexity : O(1)
// Approach 1: Count bits at each position
// For every bit (0–31), count how many numbers have that bit set.
// Since every number except one appears 3 times, counts % 3 gives the unique number.

class Solution{
    public:
        int singleNumber(vector<int> &nums){
            int ans = 0;
            for(int bit=0;bit<32;bit++){    // count how many nums have current bit set
                int count = 0;
                for(int i=0;i<nums.size();i++){
                    if(nums[i] & (1 << bit)){
                        count++;
                    }
                }
                if(count % 3 != 0){      // if count is not multiple of 3, set that bit in answer
                    ans = (ans | (1 << bit));
                }
            }
            return ans;
        }
};

// Optimized Approach : Using bitmasking
// time complexity : O(n)
// space complexity : O(1)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones = 0;
        int twos = 0;

        for(int x : nums){
            ones = (ones ^ x) & ~twos;
            twos = (twos ^ x) & ~ones;
        }

        return ones;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for(auto &num : nums){
        cin >> num;
    }
    Solution obj;
    cout << obj.singleNumber(nums);
}