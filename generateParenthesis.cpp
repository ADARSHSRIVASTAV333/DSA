#include<bits/stdc++.h>
using namespace std;

// time complexity : O(4^n / sqrt(n))  --> Catalan Number
// space complexity : O(n) or O(4^n / sqrt(n)) --> Space Including Output
class Solution{
    public:
       void backtrack(vector<string> &res,string curStr,int open,int close,int n){

           if(curStr.length() == n*2){
               res.push_back(curStr);   // Base case: if the current string length is 2*n, we have a valid combination
               return;
           }
           if(open < n){
               backtrack(res,curStr+'(',open+1,close,n);    // Add '(' if we still can (open < n)
           }
           if(open > close){
               backtrack(res,curStr+')',open,close+1,n);    // Add ')' if it will not make the sequence invalid (open > close)
           }
       }
       
       vector<string> generateParenthesis(int n){
           vector<string> res;

           string curStr = "";  // Initial state — start with empty string and 0 open/close
           int open = 0,close = 0;
           backtrack(res,curStr,open,close,n);  // start recursion
           return res;
       }
};

int main()
{
    int n;
    cin >> n;
    Solution obj;
    vector<string> result = obj.generateParenthesis(n);
    for(auto &res : result){
        cout << res << " ";
    }
    cout << endl;
    
}