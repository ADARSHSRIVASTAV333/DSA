#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(n)

class Solution{
    public:
        int missingNumber(vector<int> &nums){
            unordered_map<int,int> mpp;
            for(int i=0;i<nums.size();i++){
                mpp[nums[i]]++;
            }
            
            for(int i=0;i<=nums.size();i++){
                if(mpp.find(i) == mpp.end()){
                    return i;
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
    cout << obj.missingNumber(nums);
}