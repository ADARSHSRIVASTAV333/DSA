#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;      // Add one if no carry needed
                return digits;   // Done
            }
            digits[i] = 0;       // Set to 0 and continue carry
        }
        
        // If all digits were 9
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> digits(n);
    for(auto &val : digits){
        cin >> val;
    }
    Solution obj;
    vector<int> result = obj.plusOne(digits);
    for(auto &val : result){
        cout << val << " ";
    }
}