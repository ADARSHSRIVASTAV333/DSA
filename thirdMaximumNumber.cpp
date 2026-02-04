#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution{
    public:
        int thirdMax(vector<int> &nums){
            long long max = LLONG_MIN;
            long long max2 = LLONG_MIN;
            long long max3 = LLONG_MIN;
            
            for(int i=0;i<nums.size();i++){
                if(nums[i] == max || nums[i] == max2 || nums[i] == max3){
                    continue;
                }
                
                if(nums[i] > max){
                    max3 = max2;
                    max2 = max;
                    max = nums[i];
                }
                else if(nums[i] > max2 && nums[i] < max){
                    max3 = max2;
                    max2 = nums[i];
                }
                else if(nums[i] > max3 && nums[i] < max2){
                    max3 = nums[i];
                }
            }
            if(max3 == LLONG_MIN){
                return max;
            }
            return max3;
        }
};

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for(auto &x : nums){
        cin >> x;
    }
    Solution obj;
    cout << obj.thirdMax(nums);
}