#include<bits/stdc++.h>
using namespace std;

// Using String Conversion
// Time Complexity : O(n)
// Space Complexity : O(n)

// class Solution {
// public:
//     bool isPalindrome(int x) {
        
//         if(x < 0) return false;

//         string rev = "";
//         std::string s = std::to_string(x);
//         int n = s.length();

//         for(int i=n-1;i>=0;i--){
//            rev += s[i];
//         }

//         if(rev == s){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };

// Without Using String Conversion
// Time Complexity : O(log10n)
// Space Complexity : O(1)
// class Solution{
//     public:
//         bool isPalindrome(int x){
            
//             if(x < 0) return false;

//             int num = x;
//             long long rev = 0;

//             while(x > 0){
//                 int digit = x%10;
//                 rev = rev*10+digit;
//                 x = x/10;
//             }

//             if(rev == num){
//                 return true;
//             }
//             else{
//                 return false;
//             }
            
//         }
// };

// Optimized Approach : Reversing half of the number
// Time Complexity : O(log10n/2) ~ O(log10n)
// Space Complexity : O(1)
class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x < 0 || (x%10 == 0 && x!=0)) return false;
        int rev = 0;

        while(x > rev){        // x will contain left half and rev will contain rev right half
            int digit = x%10;
            rev = rev*10+digit;
            x = x/10;
        }

        if(x == rev || x == rev/10){
            return true;
        }
        else{
            return false;
        }

    }
};

int main()
{
    int x;
    cin >> x;
    Solution obj;
    int result = obj.isPalindrome(x);
    cout << (result ? "true" : "false");
}