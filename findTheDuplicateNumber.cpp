#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(n)

class Solution{
    public:
        int findDuplicate(vector<int> &nums){
            unordered_map<int,int> mpp;
            for(int i=0;i<nums.size();i++){
                mpp[nums[i]]++;
            }
            
            for(auto &p : mpp){
                if(p.second > 1){
                    return p.first;
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
    for(auto &num : nums){
        cin >> num;
    }
    Solution obj;
    cout << obj.findDuplicate(nums);
}