#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach
// Time Complexity : O(n^2)
// Space Complexity : O(1)
class Solution{
    public:
        int majorityElement(vector<int> &nums){
            
            int n = nums.size();
            for(int i=0;i<n;i++){
                int count = 0;
                for(int j=0;j<n;j++){
                    if(nums[i] == nums[j]){
                        count++;
                    }
                }
                if(count > n/2){
                    return nums[i];
                }
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
    int result = obj.majorityElement(nums);
    cout << result << endl;
}