#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(t.length())
// Space Complexity : O(1)

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

int main()
{
    string s,t;
    cin >> s >> t;
    Solution obj;
    cout << (obj.isSubsequence(s,t) ? "true" : "false");
}