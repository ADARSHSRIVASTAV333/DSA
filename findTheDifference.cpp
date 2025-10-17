#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:
//         char findTheDifference(string s, string t){
//             int freq[26] = {0};
            
//             for(int i=0;i<s.length();i++){
//                 freq[s[i]-'a']++;
//             }
            
//             for(int i=0;i<t.length();i++){
//                 freq[t[i]-'a']--;
//             }
            
//             for(int i=0;i<26;i++){
//                 if(freq[i] != 0){
//                     return 'a'+i;
//                 }
//             }
//             return 0;
//         }
// };

class Solution {
public:
    char findTheDifference(string s, string t){
         char res = 0;
         for(char c : s) res ^= c;
         for(char c : t) res ^= c;
         return res;

    }
};

int main()
{
    string s,t;
    cin >> s;
    cin >> t;
    Solution obj;
    char result = obj.findTheDifference(s,t);
    cout << result << endl;
}