#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string addStrings(string num1, string num2){
        int i = num1.length()-1;
        int j = num2.length()-1;
        int carry = 0;
        string res = "";

        while(i>=0 || j>=0 || carry){
            int sum = carry;
            if(i>=0) sum += num1[i--] - '0';
            if(j>=0) sum += num2[j--] - '0';
            res.push_back(sum%10 + '0');
            carry = sum/10;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

int main()
{
    string num1,num2;
    cin >> num1;
    cin >> num2;
    Solution obj;
    cout << obj.addStrings(num1,num2);
}