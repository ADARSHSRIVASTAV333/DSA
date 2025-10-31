#include<bits/stdc++.h>
using namespace std;

// time complexity : O(n^2) in worst case
// space complexity : O(1)
// class Solution{
//     public:
//         bool isValid(string s){
            
//             bool flag = true;
            
//             while(flag){
//                 flag = false;
                
//                 if(s.size() < 2)  break;
                
//                 for(int i=0;i<s.size()-1;i++){
//                     if((s[i] == '(' && s[i+1] == ')') || (s[i] == '{' && s[i+1] == '}') || (s[i] == '[' && s[i+1] == ']')){
//                         s.erase(i,2);
//                         flag = true;
//                         break;
//                     }
//                 }
//             }
//             return s.empty();
//         }
// };

// time complexity : O(n)
// space complexity : O(n)
class Solution {
public:
    bool isValid(string s){
        stack<char> st;

        for(char c : s){

            if(c == '(') st.push(')');
            else if(c == '{') st.push('}');
            else if(c == '[') st.push(']');
            else{
                if(st.empty() || st.top() != c){
                    return false;
                }
                else{
                    st.pop();
                }
            }
        }
        return st.empty();
    }
};

/*
------------------ SUMMARY TABLE ------------------

| Situation                 | Example | Detected by                      |
|----------------------------|----------|----------------------------------|
| Closing before opening     | ")("     | st.empty() inside loop           |
| Wrong bracket type         | "([)]"   | st.top() != c inside loop        |
| Extra opening brackets     | "((("    | return st.empty() at end         |

---------------------------------------------------
*/

int main()
{
    string s;
    cin >> s;
    Solution obj;
    cout << boolalpha << obj.isValid(s);
}