#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(1)
// Space Complexity : O(1)

class Solution{
    public:
        string triangleType(vector<int> &nums){
            int a = nums[0];
            int b = nums[1];
            int c = nums[2];
            
            // Sum of any two sides must be greater than the third side
            if(a+b<=c || b+c<= a || c+a<=b){
                return "none";     // Not a valid triangle
            }
            else if(a==b && b==c){
                return "equilateral";
            }
            else if(a==b || b==c || c==a){
                return "isosceles";
            }
            else{
                return "scalene";
            }
        }
};

int main()
{
    vector<int> nums(3);
    for(auto &num : nums){
        cin >> num;
    }
    Solution obj;
    cout << obj.triangleType(nums);
}