#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void moveZeroes(vector<int> &nums){
            int i=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j] != 0){
                    nums[i] = nums[j];
                    i++;
                }
            }
            // while(i < nums.size()){
            //     nums[i] = 0;
            //     i++;
            // }
            for(;i<nums.size();i++){
                nums[i] = 0;
            }
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
    
    Solution sol;
    sol.moveZeroes(nums);
    cout << "Modified Array : ";
    for(int x : nums){
        cout << x << ",";
    }
    cout << endl;
}