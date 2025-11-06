#include <iostream>
using namespace std;

// Recursive Approach
// Time Complexity : O(2^n)
// Space Complexity : O(n)
// class Solution {
// public:
//     int fib(int n) {
//         if(n == 0) return 0;
//         if(n == 1) return 1;
//
//         return fib(n-1) + fib(n-2);
//     }
// };

// Time Complexity : O(n)
// Space Complexity : O(1)
class Solution {
public:
    int fib(int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;

        int a=0,b=1;
        int c;
        for(int i=2;i<=n;i++){
            c = a+b;
            a = b;
            b = c;
        }
        return b;
    }
};


int main(){
  int n;
  cin >> n;
  Solution obj;
  cout << obj.fib(n);
}