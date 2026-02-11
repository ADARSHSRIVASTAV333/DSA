#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(n)
// Brute Force Approach: Using Hash Map

class Solution{
    public:
        int findLucky(vector<int> &arr){
            unordered_map<int,int> mpp;
            for(int i=0;i<arr.size();i++){
                mpp[arr[i]]++;
            }
            int max = -1;
            for(int i=0;i<arr.size();i++){
                if(arr[i] > max && arr[i] == mpp[arr[i]]){
                    max = arr[i];
                }
            }
            return max;
        }
};

// Time Complexity : O(n)
// Space Complexity : O(1)
// Optimized Code : Using Frequency Array

class Solution {
public:
    int findLucky(vector<int>& arr) {

        vector<int> freq(501,0);
        for(int x : arr){
            freq[x]++;
        }

        for(int i=500;i>=1;i--){
            if(freq[i] == i){
                return i;
            }
        }

        return -1;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &val : arr){
        cin >> val;
    }
    Solution obj;
    cout << obj.findLucky(arr);
}