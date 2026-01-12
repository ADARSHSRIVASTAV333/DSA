#include<bits/stdc++.h>
using namespace std;


// Time Complexity : O(1)
// Space Complexity : O(1)

class Solution{
    public:
        bool isPowerOfTwo(int n){
            if(n <= 0) return false;
            int res = (n & (n-1));
            if(res == 0) return true;
            else return false;
        }
};

// Using Built-in Function
// Time Complexity : O(1)
// Space Complexity : O(1)

class Solution {
public:
    bool isPowerOfTwo(int n){
        if (n<=0) return false;
        if(__builtin_popcount(n) == 1) return true;
        else return false;
    }
};

// Iterative Division Method
// Time Complexity : O(logn)
// Space Complexity : O(1)

class Solution {
public:
    bool isPowerOfTwo(int n){
        if(n<=0) return false;
        while(n%2 == 0){
            n = n/2;
        }
        return n == 1;
    }
};

int main()
{
    int n;
    cin >> n;
    Solution obj;
    cout << (obj.isPowerOfTwo(n) ? "true" : "false");
}