#include<bits/stdc++.h>
using namespace std;

// time complexity : O(n)
// space complexity : O(1)

class Solution{
    public:
        int singleNumber(vector<int> &nums){
            int ans = 0;
            for(int bit=0;bit<32;bit++){
                int count = 0;
                for(int i=0;i<nums.size();i++){
                    if(nums[i] & (1 << bit)){
                        count++;
                    }
                }
                if(count % 3 != 0){
                    ans = (ans | (1 << bit));
                }
            }
            return ans;
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