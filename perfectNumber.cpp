#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution{
    public:
        bool checkPerfectNumber(int n){
            int sum = 0;
            for(int i=1;i<n;i++){
                if(n % i == 0){
                    sum += i;
                }
            }
            return sum == n;
        }
};

// Optimal Approach
// Time Complexity : O(sqrt(n))
// Space Complexity : O(1)

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num <= 1) return false;
        int sum = 1;
        for(int i=2;i<=sqrt(num);i++){
            if(num % i == 0){
                sum += i;          // Add divisor i
                if(i != num/i){
                    sum += num/i;  // Add the paired divisor if it's different
                }
            }
        }
        return sum == num;
    }
};

int main()
{
    int n;
    cin >> n;
    Solution obj;
    cout << (obj.checkPerfectNumber(n) ? "true" : "false");
}