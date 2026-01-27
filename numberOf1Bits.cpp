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

// Time Complexity : O(k) where k is the number of 1 bits in n
// Space Complexity : O(1)

class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while(n){
            n &= (n-1);
            count++;
        }
        return count;
    }
};

int main()
{
    int n;
    cin >> n;
    Solution obj;
    cout << obj.hammingWeight(n) << endl;
}