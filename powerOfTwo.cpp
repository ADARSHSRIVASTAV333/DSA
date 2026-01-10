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

int main()
{
    int n;
    cin >> n;
    Solution obj;
    cout << (obj.isPowerOfTwo(n) ? "true" : "false");
}