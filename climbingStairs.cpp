#include<bits/stdc++.h>
using namespace std;


// Recursive Approach
// Time Complexity : O(2^n) -> TLE
// Space Complexity : O(n)

class Solution {
public:
    int climbStairs(int n){
        if(n<=2) return n;
        return climbStairs(n-1) + climbStairs(n-2);
    }
};

// Optimal Approach (Iterative DP)
// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution{
    public:
        int climbStairs(int n){
            if(n<=2) return n;
            int a = 1;
            int b = 2;
            int c;
            for(int i=3;i<=n;i++){
                c = a+b;
                a = b;
                b = c;
            }
            return b;
        }
};

// Memoization Approach
// Time Complexity : O(n)
// Space Complexity : O(n) -> for dp array + O(n) for recursion stack

class Solution{
    public:
        int climbStairs(int n){
            vector<int> dp(n+1,-1);
            return solve(n,dp);
        }
        
        int solve(int n,vector<int> &dp){
            if(n<=2) return n;
            if(dp[n] != -1){
                return dp[n];
            }
            dp[n] = solve(n-1,dp) + solve(n-2,dp);
            return dp[n];
        }
};

int main()
{
    int n;
    cin >> n;
    Solution obj;
    cout << obj.climbStairs(n);
}