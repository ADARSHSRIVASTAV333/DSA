#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
       string longestCommonPrefix(vector<string> &strs){
           
           if(strs.empty()) return "";
           //{"flower", "flow", "flight"}
           sort(strs.begin(),strs.end());
           //{"flight", "flow", "flower"}
           string first = strs.front(); //flight
           string last = strs.back();   //flower
           
           int i=0;
           while(i<first.size() && i<last.size() && first[i] == last[i]){
               i++;
           }
           
           return first.substr(0,i);   //fl
       }
};

int main()
{
    int n;
    cin >> n;
    vector<string> strs(n);
    for(int i=0;i<n;i++){
        cin >> strs[i];
    }
    Solution obj;
    string result = obj.longestCommonPrefix(strs);
    cout << result << endl;
}
