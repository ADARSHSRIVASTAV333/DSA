#include<bits/stdc++.h>
using namespace std;

// time complexity: O(n)
// space complexity: O(1)
class Solution{
    public:
        int searchInsert(vector<int> &nums,int target){
            for(int i=0;i<nums.size();i++){
                if(target == nums[i]){
                    return i;
                }
                else if(target < nums[i]){
                    return i;
                }
            }
            return nums.size();
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