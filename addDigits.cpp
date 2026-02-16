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

// Time Complexity : O(log n)
// Space Complexity : O(1)
// Brute Force Approach: Iteratively sum the digits until a single digit is obtained

class Solution {
public:
    int addDigits(int num) {

        int sum = 0;
        while (num > 0 || sum >= 10){
            if (num == 0) {
                num = sum;
                sum = 0;
            }

            sum += num % 10;
            num /= 10;
        }

        return sum;
    }
};


int main()
{
    int num;
    cin >> num;
    Solution obj;
    cout << obj.addDigits(num);
}