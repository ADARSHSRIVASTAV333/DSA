#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution{
    public:
        int secondHighest(string s){
            string num = "";
            for(char c : s){
                if(isdigit(c)){
                    num += c;
                }
            }
            int max = -1;
            int max2 = -1;
            for(int i=0;i<num.size();i++){
                int x = num[i] - '0';
                if(x > max){
                    max2 = max;
                    max = x;
                }
                else if(x > max2 && x < max){
                    max2 = x;
                }
            }
            return max2;
        }
};

// Optimized Code

class Solution {
public:
    int secondHighest(string s) {
        int max = -1;
        int max2 = -1;
        for(char c : s){
            if(isdigit(c)){
                int x = c - '0';

                if(x > max){
                    max2 = max;
                    max = x;
                }
                else if(x > max2 && x < max){
                    max2 = x;
                }
            }
        }
        return max2;
    }
};

int main()
{
    string s;
    cin >> s;
    Solution obj;
    cout << obj.secondHighest(s);
}