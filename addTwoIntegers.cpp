#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(1)
// Space Complexity : O(1)
// Approach : Direct Addition

class Solution {
public:
    int sum(int num1, int num2) {
        return num1+num2;
    }
};

int main()
{
    int a,b;
    cin >> a >> b;
    Solution obj;
    cout << obj.sum(a,b);
}