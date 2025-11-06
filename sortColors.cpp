#include<bits/stdc++.h>
using namespace std;

// Bubble Sort Approach
// Time Complexity : O(n^2)
// Space Complexity : O(1)

// class Solution{
//   public:
//       void sortColors(vector<int> &nums){
//         int n = nums.size();
//         int temp;
        
//         for(int i=0;i<n-1;i++){
//           for(int j=0;j<n-i-1;j++){
//             if(nums[j] > nums[j+1]){
//               temp = nums[j];
//               nums[j] = nums[j+1];
//               nums[j+1] = temp;
//             }
//           }
//         }
        
//       }
// };

// Counting Sort Approach
// Time Complexity : O(n)
// Space Complexity : O(1)

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int n = nums.size();
//         int count0 = 0,count1 = 0,count2 = 0;

//         for(int i=0;i<n;i++){
//             if(nums[i] == 0) count0++;
//             else if(nums[i] == 1) count1++;
//             else if(nums[i] == 2) count2++;
//         }
//         for(int i=0;i<count0;i++){
//             nums[i] = 0;
//         }
//         for(int i=count0;i<count0+count1;i++){
//             nums[i] = 1;
//         }
//         for(int i=count0+count1;i<n;i++){
//             nums[i] = 2;
//         }
//     }
// };

// Dutch National Flag Algorithm
// Time Complexity : O(n)
// Space Complexity : O(1)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int mid = 0;
        int high = n-1;

        while(mid<=high){
            if(nums[mid] == 0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else if(nums[mid] == 2){
                swap(nums[mid],nums[high]);
                high--;
            }
        }  // Sorted the array in place without extra memory.
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
  obj.sortColors(nums);
  for(auto &num : nums){
    cout << num << " ";
  }
  cout << endl;
}