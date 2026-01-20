#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(n*m)
// Space Complexity : O(k) where k is the size of intersection set

class Solution{
    public:
        vector<int> intersection(vector<int> &nums1,vector<int> &nums2){
            unordered_set<int> ans;
            vector<int> res;
            for(int i=0;i<nums1.size();i++){
                for(int j=0;j<nums2.size();j++){
                    if(nums1[i] == nums2[j]){
                        ans.insert(nums1[i]);
                    }
                }
            }
            for(int x : ans){
                res.push_back(x);
            }
            return res;
        }
};

int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> nums1(n);
    vector<int> nums2(m);
    for(auto &x : nums1){
        cin >> x;
    }
    for(auto &x : nums2){
        cin >> x;
    }
    Solution obj;
    vector<int> result = obj.intersection(nums1,nums2);
    for(auto &x : result){
        cout << x << " ";
    }
    
}