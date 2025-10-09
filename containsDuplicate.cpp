#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
       bool containsDuplicate(vector<int> &nums){
           
           unordered_set<int> st;
           for(int i=0;i<nums.size();i++){
               if(!st.insert(nums[i]).second){
                   return true;
               }
           }
           return false;
       }
};

// Using Sorting
// Time Complexity : O(nlogn)
// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {

//         sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size()-1;i++){
//             if(nums[i] == nums[i+1]){
//                 return true;
//             }
//         }
//         return false;
        
//     }
// };

// Using Unordered Map
// Time Complexity : O(n)
// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {

//         unordered_map<int,int> mpp;         
//         for(int i=0;i<nums.size();i++){
//             mpp[nums[i]]++;
//         }

//         for(int i=0;i<nums.size();i++){
//             if(mpp[nums[i]] > 1){
//                 return true;;
//             }
//         }
//         return false;
        
//     }
// };

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<nums.size();i++){
        cin >> nums[i];
    }
    
    Solution obj;
    bool result = obj.containsDuplicate(nums);
    cout << (result ? "true" : "false") << endl;
}