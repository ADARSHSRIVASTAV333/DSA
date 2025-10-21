#include<bits/stdc++.h>
using namespace std;

// Using HashSet to detect cycles
// Time Complexity : O(logn) (number of digits in n)
// Space Complexity : O(logn) (in the worst case, we store all intermediate sums)
class Solution{
    public:
        bool isHappy(int n){
            
            unordered_set<int> st;

            while(n!=1){             // Outer loop: repeat until happy or cycle detected
                int sum = 0;
                int temp = n;
                
                while(temp>0){              
                    int digit = temp%10;           // inner loop: extract all digits and sum their squares
                    sum += digit*digit;
                    temp=temp/10;
                }
                
                if(st.count(sum)) return false;  // detect cycle: if we’ve seen this value before, it's unhappy
                st.insert(sum); // record the sum of squares
                n = sum;   // update n for the next round
            }
            return true;
        }
};

int main()
{
    int n;
    cin >> n;
    Solution obj;
    bool result = obj.isHappy(n);
    cout << (result ? "true" : "false") << endl;
}