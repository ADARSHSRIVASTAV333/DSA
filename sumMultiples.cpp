#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution{
    public:
        int sumOfMultiples(int n){
            int sum = 0;
            for(int i=1;i<=n;i++){
                if(i%3 == 0 || i%5 == 0 || i%7 == 0){
                    sum += i;
                }
            }
            return sum;
        }
};

// Time Complexity : O(1)
// Space Complexity : O(1)

class Solution {
public:

    int sum(int k,int n)
    {
        int m = n/k;
        return k*m*(m+1)/2;
    }

    int sumOfMultiples(int n)
    {
        return sum(3,n) + sum(5,n) + sum(7,n) - sum(15,n) - sum(21,n) - sum(35,n) + sum(105,n);
    }

};

int main()
{
    int n;
    cin >> n;
    Solution obj;
    cout << obj.sumOfMultiples(n);
}