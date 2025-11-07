#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach
// Time Complexity : O(n√n)
// Space Complexity : O(1)
// Time Limit Exceeded for large inputs

class Solution {
public:
    bool isPrime(int n){
        if(n<=1) return false;
        for(int i=2;i<=sqrt(n);i++){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }

    int countPrimes(int n) {
        int count = 0;
        for(int i=2;i<n;i++){
            if(isPrime(i)){
                count++;
            }
        }
        return count;
    }
};

// Sieve of Eratosthenes
// Time Complexity : O(n log log n)
// Space Complexity : O(n)

class Solution{
    public:
        int countPrimes(int n){
            if(n<=2) return 0;
            vector<bool> isPrime(n,1);
            isPrime[0] = isPrime[1] = 0;
            int count = 0;
            
            for(int i=2;i*i<n;i++){
                if(isPrime[i]){
                    for(int j=i*i;j<n;j+=i){
                        isPrime[j] = 0;
                    }
                }
            }
            
            for(int i=2;i<n;i++){
                if(isPrime[i]){
                    count++;
                }
            }
            return count;
        }
};

int main()
{
    int n;
    cin >> n;
    Solution obj;
    cout << obj.countPrimes(n);
}