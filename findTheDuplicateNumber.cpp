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

// Optimal Approach (Binary Search on Value Range)
// Time Complexity : O(n log n)
// Space Complexity : O(1)

class Solution {
public:
    int findDuplicate(vector<int>& nums){
      int low = 1;
      int high = nums.size()-1;
      

      while(low<high){
        int mid = low + (high-low)/2;

        int count = 0;
        for(int x : nums){
            if(x<=mid){
                count++;
            }
        }

        if(count > mid){
            high = mid;       // duplicate is in [low, mid]
        }
        else{
            low = mid + 1;    // duplicate is in [mid+1, high]
        }

      }
      return low;   // at this point low == high == duplicate
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