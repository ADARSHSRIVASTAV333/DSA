#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(n)
class Solution{
    public:
        bool isIsomorphic(string s, string t){
            if(s.length() != t.length()) return false;
            
            unordered_map<char,char> mppST; // s -> t
            unordered_map<char,char> mppTS; // t -> s
            
            for(int i=0;i<s.length();i++){
                char c1 = s[i];
                char c2 = t[i];
                
                // if mapping already exists, verify consistency
                if(mppST.count(c1) && mppST[c1] != c2) return false;
                if(mppTS.count(c2) && mppTS[c2] != c1) return false;
                
                // create the mapping both ways
                mppST[c1] = c2;
                mppTS[c2] = c1;
            }
            return true;
        }
};

int main()
{
    string s,t;
    cin >> s;
    cin >> t;
    Solution obj;
    bool result = obj.isIsomorphic(s,t);
    cout << (result ? "true" : "false");
}