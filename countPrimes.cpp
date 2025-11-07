#include<bits/stdc++.h>
using namespace std;

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