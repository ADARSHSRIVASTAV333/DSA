#include<bits/stdc++.h>
using namespace std;

// time complexity: O(n)
// space complexity: O(1)
// class Solution{
//     public:
//         int searchInsert(vector<int> &nums,int target){
//             for(int i=0;i<nums.size();i++){
//                 if(target == nums[i]){
//                     return i;
//                 }
//                 else if(target < nums[i]){
//                     return i;
//                 }
//             }
//             return nums.size();
//         }
// };

// Optimized Approach: Binary Search
// time complexity: O(log n)
// space complexity: O(1)
class Solution {
public:
    int searchInsert(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size()-1;

        while(low<=high){
            int mid = low + (high-low)/2; // Handling Overflow

            if(target == nums[mid]){
                return mid;
            }
            else if(target > nums[mid]){
                low = mid + 1;
            }
            else if(target < nums[mid]){
                high = mid - 1;
            }
        }
        return low;  // When binary search finishes, low points to where the target belongs
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
    int target;
    cin >> target;
    Solution obj;
    cout << obj.searchInsert(nums,target);
    
}