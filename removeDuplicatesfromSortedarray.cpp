#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
       int removeDuplicates(vector<int> &nums){
           int i = 0;
           for(int j=1;j<nums.size();j++){
               if(nums[i] != nums[j]){
                   nums[i+1] = nums[j];
                   i++;  // moving to the new unique element to compare later
               }
           }
           return i+1; // returning the size of arr i.e no of unique elements in the array
       }
};

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    
    Solution sol;
    int result = sol.removeDuplicates(nums);
    cout << result << endl;
    
    cout << "Modified array: ";
    for (int i = 0; i < result; i++) {
        cout << nums[i] << ",";
    }
    cout << endl;
}