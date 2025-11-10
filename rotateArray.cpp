#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(k) for temp array

class Solution{
    public:
        void rotate(vector<int> &nums,int k){

            int n = nums.size();
            if(n == 0) return; // Edge case: empty array
            k = k % n;  // In case k is greater than n
            vector<int> temp;

            for(int i=n-k;i<n;i++){
                temp.push_back(nums[i]);
            }
            
            for(int i=n-k-1;i>=0;i--){
                nums[i+k] = nums[i];
            }
            
            for(int i=0;i<k;i++){
                nums[i] = temp[i];
            }
        }
};

// Optimal Approach: Reversal Algorithm
// Time Complexity : O(n-k) + O(k) + O(n) = O(n)
// Space Complexity : O(1)

class Solution {
public:
    void reversearr(vector<int> &nums,int start,int end){
        while(start<end){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }

    void rotate(vector<int>& nums, int k){
        int n = nums.size();
        if(n == 0) return;
        k = k % n;

        reversearr(nums,0,n-k-1);
        reversearr(nums,n-k,n-1);
        reversearr(nums,0,n-1);
    }
};

// Using STL reverse function
// Time Complexity : O(n-k) + O(k) + O(n) = O(n)
// Space Complexity : O(1)

class Solution {
public:
    void rotate(vector<int>& nums, int k){
        int n = nums.size();
        if(n == 0) return;
        k = k % n;

        reverse(nums.begin(),nums.begin() + (n-k));
        reverse(nums.begin() + (n-k),nums.end());
        reverse(nums.begin(),nums.end());
       
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
    obj.rotate(nums,k);
    for(auto &num : nums){
        cout << num << " ";
    }
}