#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int removeElement(vector<int> &nums, int val){
            int i = 0;
            for(int j = 0;j<nums.size();j++){
                if(nums[j] != val){
                    nums[i] = nums[j];
                    i++;
                }
            }
            return i;
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
    
    int val;
    cin >> val;
    
    Solution sol;
    int result = sol.removeElement(nums,val);
    cout << result << endl;

    cout << "Modified array: ";
    for(int i=0;i<result;i++){
        cout << nums[i] << ",";
    }
    cout << endl;
}
