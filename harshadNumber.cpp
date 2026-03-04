#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(log n)  (number of digits in x)
// Space Complexity : O(1)
// Approach: Calculate the sum of digits of x and check if x is divisible by that sum. If it is, return the sum;
// otherwise, return -1.

class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
         
        int sum = 0;
        int temp = x;
        
        while(temp>0){   // Calculate the sum of digits of x
            sum += temp % 10;
            temp = temp / 10;
        }

        if(x % sum == 0){  // Check if x is divisible by the sum of its digits
            return sum;
        }
        return -1;
    }
};

// Time Complexity : O(log n)  (number of digits in x)
// Space Complexity : O(1)
// Optimized Approach: Calculate the sum of digits in a single pass without using an extra variable for temp

class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;

        for (int temp = x; temp > 0; temp /= 10) {
            sum += temp % 10;
        }

        return (x % sum == 0) ? sum : -1;
    }
};

// Time Complexity : O(log n)  (number of digits in x)
// Space Complexity : O(1)
// Alternative Approach: Convert the number to a string to calculate the sum of digits

class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        string s = to_string(x);
        int sum = 0;

        for(char c : s) {
            sum += c - '0'; // Convert character to integer by subtracting '0'
        }

        return (sum != 0 && x % sum == 0) ? sum : -1; // Check if sum is not zero to avoid division by zero and if x is divisible by the sum
    }
};


int main()
{
    int x;
    cin >> x;
    Solution obj;
    cout << obj.sumOfTheDigitsOfHarshadNumber(x);
}