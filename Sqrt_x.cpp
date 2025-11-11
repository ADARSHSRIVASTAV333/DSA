#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach
// Time Complexity : O(√x)
// Space Complexity : O(1)

class Solution{
    public:
        int mySqrt(int x){
            if(x == 0 || x == 1) return x;
            int ans = 1;
            for(long long i=1;i<=x/2;i++){
                if(i*i == x) return i;  // exact square found
                if(i*i < x){
                    ans = i;        // store the largest i with i² <= x
                }
                else{
                    break;        // stop once i² > x
                }
            }
            return ans;
        }
};

int main()
{
    int x;
    cin >> x;
    Solution obj;
    cout << obj.mySqrt(x);
}