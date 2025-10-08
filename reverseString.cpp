#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
       void reverseString(vector<char> &s){
           int left = 0;
           int right = s.size()-1;
           
           while(left<right){
               swap(s[left],s[right]);
               left++;
               right--;
           }
       }
};

int main()
{
    int n;
    cin >> n;
    vector<char> s(n);
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    
    Solution sol;
    sol.reverseString(s);
    for(auto it : s){
        cout << it << " ";
    }
    cout << endl;
    
}