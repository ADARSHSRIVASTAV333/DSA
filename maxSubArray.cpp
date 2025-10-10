#include<bits/stdc++.h>
using namespace std;

class Solution{
    public: 
       int maxSubArray(vector<int> &nums){
           
           int maxSum = nums[0];
           int sum = 0;
           
           for(int i=0;i<nums.size();i++){
               sum += nums[i];
               if(sum > maxSum){
                   maxSum = sum;
               }
               if(sum < 0){
                   sum = 0;
               }
           }
           return maxSum;
       }
};

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<nums.size();i++){
        cin >> nums[i];
    }
    
    Solution obj;
    int result = obj.maxSubArray(nums);
    cout << result << endl;
}
