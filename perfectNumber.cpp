#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution{
    public:
        bool checkPerfectNumber(int n){
            int sum = 0;
            for(int i=1;i<n;i++){
                if(n % i == 0){
                    sum += i;
                }
            }
            return sum == n;
        }
};

int main()
{
    int n;
    cin >> n;
    Solution obj;
    cout << (obj.checkPerfectNumber(n) ? "true" : "false");
}