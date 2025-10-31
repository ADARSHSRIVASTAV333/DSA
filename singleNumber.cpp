#include<bits/stdc++.h>
using namespace std;

// time complexity : O(n)
// space complexity : O(n)
// class Solution{
//     public:
//         int singleNumber(vector<int> &nums){
//             if(nums.size() == 1) return nums[0];
//             unordered_map<int,int> mpp;
//             for(int i=0;i<nums.size();i++){
//                 mpp[nums[i]]++;
//             }
            
//             for(int i=0;i<nums.size();i++){
//                 if(mpp[nums[i]] == 1){
//                     return nums[i];
//                 }
//             }
//             return -1;
//         }
// };

// time complexity : O(n)
// space complexity : O(1)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int num : nums){
            result ^= num;
        }
        return result;
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
