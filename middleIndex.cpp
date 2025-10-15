#include<bits/stdc++.h>
using namespace std;

// Same as pivot index

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        
        int total = 0;
        for(int i=0;i<nums.size();i++){
            total += nums[i];
        }

        int leftSum = 0;
        for(int i=0;i<nums.size();i++){
            int rightSum = total - leftSum - nums[i];
            if(leftSum == rightSum){
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    
    Solution obj;
    int result = obj.findMiddleIndex(nums);
    cout << result << endl;
    
}