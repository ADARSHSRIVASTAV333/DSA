#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(n) -> for hashmap

class Solution{
    public:
        int sumOfUnique(vector<int> &nums){
            unordered_map<int,int> mpp;

            for(int i=0;i<nums.size();i++){
                mpp[nums[i]]++;
            }

            int sum = 0;

            for(int i=0;i<nums.size();i++){
                if(mpp[nums[i]] == 1){
                    sum += nums[i];
                }
            }
            
            // for(auto &p : mpp){          // alternate way 
            //     if(p.second == 1){
            //         sum += p.first;
            //     }
            // }

            return sum;
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
    cout << obj.sumOfUnique(nums);
}
