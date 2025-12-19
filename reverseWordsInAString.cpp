#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(n)

class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int i = s.size() - 1;

        while (i >= 0) {
            // skip spaces
            while (i >= 0 && s[i] == ' ') i--;

            if (i < 0) break;

            int j = i;

            // find word start
            while (j >= 0 && s[j] != ' ') j--;

            if (!ans.empty()) ans += ' ';
            ans += s.substr(j + 1, i - j);

            i = j - 1;
        }

        return ans;
    }
};

int main()
{
    string s;
    cin >> s;
    Solution obj;
    cout << obj.reverseWords(s);
}