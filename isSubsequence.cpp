#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(t.length())
// Space Complexity : O(1)
// Two Pointer Approach

class Solution{
    public:
        bool isSubsequence(string s,string t){
            int i=0,j=0;
            while(i<s.length() && j<t.length()){
                if(s[i] == t[j]){
                    i++;
                }
                j++;
            }
            if(i == s.length()) return true;
            else return false;
        }
};

// Time Complexity : O(t.length())
// Space Complexity : O(1)
// Two Pointer Approach

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sptr = 0;
        for(int i=0;i<t.length();i++){
            if(sptr < s.length() && s[sptr] == t[i]){
                sptr++;
            } 
        }
        if(sptr == s.length()) return true;
        else return false;
    
    }
};

int main()
{
    string s,t;
    cin >> s >> t;
    Solution obj;
    cout << (obj.isSubsequence(s,t) ? "true" : "false");
}