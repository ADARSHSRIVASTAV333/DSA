#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution{
    public:
        string toLowerCase(string s){
            for(int i=0;i<s.length();i++){
                s[i] = tolower(s[i]);
            }
            return s;
        }
};

int main()
{
    string s;
    //cin >> s;
    getline(cin,s);
    Solution obj;
    cout << obj.toLowerCase(s);
}