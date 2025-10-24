#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(1)
class Solution{
    public:
        vector<int> runningSum(vector<int> &nums){
            for(int i=1;i<nums.size();i++){
                nums[i] += nums[i-1];
            }
            return nums;
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
    vector<int> result = obj.runningSum(nums);
    for(auto i : result){
        cout << i << " ";
    }
    cout << endl;
}