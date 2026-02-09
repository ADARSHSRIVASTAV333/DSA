#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(n)

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