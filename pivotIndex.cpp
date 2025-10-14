#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:
//         int pivotIndex(vector<int> &nums){
//             int n = nums.size();
            
//             for(int i=1;i<n;i++){
//                 nums[i] += nums[i-1];  //Created prefix sum array
//             }
            
//             if(nums[n-1] - nums[0] == 0) return 0;  // Check if index 0 is pivot
            
//             for(int i=1;i<n;i++){
//                 int check = (nums[n-1] - nums[i]);
//                 if(check == nums[i-1]){
//                     return i;   //pivot index
//                 }
//             }
//             return -1;  // No pivot index found
//         }
// };

// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {

//         int n = nums.size();
//         int total = 0;
//         for(int i=1;i<n;i++){
//             nums[i] += nums[i-1];   //Created prefix sum array
//         }

//         if(nums[n-1] - nums[0] == 0) return 0;  // Check if index 0 is pivot
        
//         for(int i=1;i<n;i++){

//             int rightSum = nums[n-1] - nums[i];
//             int leftSum = nums[i-1];

//             if(leftSum == rightSum){
//                 return i;          //pivot index
//             }
            
//         }
//         return -1;    // No pivot index found
//     }
// };

class Solution{
    public:
        int pivotIndex(vector<int> &nums){
             int n = nums.size();
             int total = 0;
             for(int i=0;i<n;i++){
                 total += nums[i];
             }
             
             int leftSum = 0;
             for(int i=0;i<n;i++){
                 int rightSum = total - leftSum - nums[i];
                 if(leftSum == rightSum){
                     return i;
                 }
                 leftSum += nums[i];
             }
             return -1;
        }
};

int main()
{
    int n;
    cin >> n;
    cout << "nums : ";
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    
    Solution obj;
    int result = obj.pivotIndex(nums);
    cout << "pivot index : " << result << endl;
}