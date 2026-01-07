#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(1)
// Approach : Hashing

class Solution{
    public:
        int romanToInt(string s){
            int n = s.length();
            unordered_map<char,int> mpp = {
                {'I',1},
                {'V',5},
                {'X',10},
                {'L',50},
                {'C',100},
                {'D',500},
                {'M',1000}
            };
            int res = 0;
            for(int i=0;i<n;i++){
                if(i+1<n && mpp[s[i]] < mpp[s[i+1]]){
                    res = res - mpp[s[i]];
                }
                else{
                    res = res + mpp[s[i]];
                }
            }
            return res;
        }
};

// Time Complexity : O(n)
// Space Complexity : O(1)
// Alternative Approach : Right to Left Traversal

class Solution{
    public:
        int romanToInteger(string s){
            int n = s.length();
            unordered_map<char,int> mpp = {
                {'I',1},
                {'V',5},
                {'X',10},
                {'L',50},
                {'C',100},
                {'D',500},
                {'M',1000}
            };
            int res = 0;
            int prev = 0;
            for(int i=n-1;i>=0;i--){
                int curr = mpp[s[i]];
                if(curr < prev){
                    res = res - curr;
                }
                else{
                    res = res + curr;
                }
                prev = curr;
            }
            return res;
        }
};

int main()
{
    string s;
    cin >> s;
    Solution obj;
    cout << obj.romanToInteger(s);
}