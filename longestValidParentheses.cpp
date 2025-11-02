#include<bits/stdc++.h>
using namespace std;

// time complexity : O(n^3) in worst case --> TLE
// space complexity : O(n)
// class Solution{
//     public:
//         bool validParentheses(string s){
//             stack<char> st;
//             for(int i=0;i<s.length();i++){
//                 char c = s[i];
//                 if(c == '(') st.push(')');
//                 else{
//                     if(st.empty() || st.top() != c) return false;
//                     st.pop();
//                 }
//             }
//             return st.empty();
//         }
        
//         int longestValidParentheses(string s){
//             int count = 0;
//             for(int i=0;i<s.length();i++){
//                 for(int j=i+1;j<s.length();j++){
//                     string temp = s.substr(i,j-i+1);
//                     if(validParentheses(temp)){
//                         count = max(count,j-i+1);
//                     }
//                 }
//             }
//             return count;
//         }
// };

// time complexity : O(n)
// space complexity : O(n)
class Solution{
    public:
        int longestValidParentheses(string s){
            stack<int> st;
            st.push(-1);
            int maxLen = 0;
            
            for(int i=0;i<s.length();i++){
                if(s[i] == '(') st.push(i);
                else{
                    st.pop();
                    if(st.empty()){
                        st.push(i);
                    }
                    else{
                        maxLen = max(maxLen,i-st.top());
                    }
                }
            }
            return maxLen;
        }
};

int main()
{
    string s;
    cin >> s;
    Solution obj;
    cout << obj.longestValidParentheses(s);
}