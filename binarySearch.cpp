#include<bits/stdc++.h>
using namespace std;

// time complexity: O(log n)
// space complexity: O(1)
class Solution{
    public:
        int search(vector<int> &nums,int target){
            int low = 0;
            int high = nums.size()-1;
            int mid;
            
            while(low<=high){
                mid = low + (high-low)/2;  // Handling Overflow
                
                if(target > nums[mid]){
                    low = mid + 1;
                }
                else if(target < nums[mid]){
                    high = mid - 1;
                }
                else if(target == nums[mid]){
                    return mid;                   // Target found
                }
            }
            return -1;   // Target not found
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
    cout << obj.search(nums,target);
}