#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(1)
// Space Complexity : O(1)
// Using Digital Root Concept: digital_root(n) = 1 + (n - 1) % 9

class Solution {
public:
    int addDigits(int num) {
        if(num == 0) return 0;
        return 1 + (num-1) % 9;
    }
};




int main()
{
    int num;
    cin >> num;
    Solution obj;
    cout << obj.addDigits(num);
}