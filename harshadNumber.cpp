#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(log n)  (number of digits in x)
// Space Complexity : O(1)

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

int main()
{
    int x;
    cin >> x;
    Solution obj;
    cout << obj.sumOfTheDigitsOfHarshadNumber(x);
}