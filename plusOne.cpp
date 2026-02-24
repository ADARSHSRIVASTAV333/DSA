#include <bits/stdc++.h>
using namespace std;

/*  Approach:
    ----------
    1. Traverse the array from right to left (least significant digit).
    2. If the current digit is less than 9:
         - Increment it.
         - Return the result immediately (no carry required).
    3. If the current digit is 9:
         - Set it to 0 (carry generated).
         - Continue moving left.
    4. If all digits are 9:
         - Insert 1 at the beginning of the array.

    Time Complexity  : O(n)
    Space Complexity : O(1)  (ignoring output space)
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size();

        // Step 1: Traverse from last digit to first
        for (int i = n - 1; i >= 0; i--) {

            // Case 1: No carry needed
            if (digits[i] < 9) {
                digits[i]++;      // Increment digit
                return digits;    // Return immediately
            }

            // Case 2: Carry required
            digits[i] = 0;        // Set current digit to 0
        }

        // Step 2: If all digits were 9
        digits.insert(digits.begin(), 1);

        return digits;
    }
};

int main() {

    // Input: size of array
    int n;
    cin >> n;

    // Input: digits
    vector<int> digits(n);
    for (auto &val : digits) {
        cin >> val;
    }

    // Process
    Solution obj;
    vector<int> result = obj.plusOne(digits);

    // Output result
    for (auto &val : result) {
        cout << val << " ";
    }

    return 0;
}