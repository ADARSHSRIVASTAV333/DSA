#include<bits/stdc++.h>
using namespace std;

// time complexity : O(n)
// space complexity : O(n)
class Solution{
    public:
        bool containsNearbyDuplicate(vector<int> &nums, int k){
            unordered_map<int,int> mpp;
            for(int i=0;i<nums.size();i++){
                
                if(mpp.count(nums[i])){
                    int check = abs(mpp[nums[i]] - i);
                    if(check <= k){
                        return true;
                    }
                }
                mpp[nums[i]] = i;
            }
            return false;
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
    int k;
    cin >> k;
    Solution obj;
    cout << boolalpha << obj.containsNearbyDuplicate(nums,k);
}
