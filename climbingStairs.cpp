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




int main()
{
    int n;
    cin >> n;
    Solution obj;
    cout << obj.climbStairs(n);
}