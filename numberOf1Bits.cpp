#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(1)
// Space Complexity : O(1)

class Solution {
public:
    int hammingWeight(int n) {
        return __builtin_popcount(n);
    }
};

int main()
{
    int n;
    cin >> n;
    Solution obj;
    cout << obj.hammingWeight(n) << endl;
}