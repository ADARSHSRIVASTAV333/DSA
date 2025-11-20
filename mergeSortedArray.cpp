#include<bits/stdc++.h>
using namespace std;

// Insert nums2 into nums1 and then sort
// time complexity : O((m+n)log(m+n)) for sorting + O(n) for insertion
// space complexity : O(log(m+n)) for sorting recursion stack

class Solution{
    public:
        void merge(vector<int> &nums1,int m,vector<int> &nums2,int n){
            int j = 0;
            for(int i=m;i<m+n;i++){
                nums1[i] = nums2[j]; 
                j++;
            }
            sort(nums1.begin(),nums1.end());  
        }
};

// Optimal Approach (Two Pointer from end)
// time complexity : O(m+n)
// space complexity : O(1)

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;         // last element in nums1's valid range
        int j = n - 1;         // last element in nums2
        int k = m + n - 1;     // last position in nums1

        // Compare from the back and place the larger value at the end
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        // If nums2 still has remaining elements
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};


int main()
{
    int m,n;
    cin >> m;
    cin >> n;
    
    vector<int> nums1(m+n);
    for(int i=0;i<m;i++){
        cin >> nums1[i];
    }
    for(int i=m;i<m+n;i++){
        nums1[i] = 0;
    }
    
    vector<int> nums2(n);
    for(int i=0;i<n;i++){
        cin >> nums2[i];
    }
    
    Solution obj;
    obj.merge(nums1,m,nums2,n);
    for(auto &num : nums1){
        cout << num << " ";
    }
    
}