#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(m * n)
// Space Complexity : O(1)

class Solution{
    public:
        bool searchMatrix(vector<vector<int>> &matrix,int target){
            int m = matrix.size();
            int n = matrix[0].size();
            
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(matrix[i][j] == target){
                        return true;
                    }
                }
            }
            return false;
        }
};

// Optimal Approach: Binary Search
// Time Complexity : O(log(m*n))
// Space Complexity : O(1)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int left = 0;
        int right = m*n-1;
        while(left<=right){
            int mid = left + (right-left)/2;
            int row = mid/n;
            int col = mid%n;
            if(matrix[row][col] == target){
                return true;
            }
            else if(matrix[row][col] > target){
                right = mid - 1;
            }
            else if(matrix[row][col] < target){
                left = mid + 1;
            }
        }
        return false;
    }
};

int main()
{
    int row,col;
    cin >> row >> col;
    int target;
    cin >> target;
    vector<vector<int>> matrix(row,vector<int>(col));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin >> matrix[i][j];
        }
    }
    Solution obj;
    cout << (obj.searchMatrix(matrix,target) ? "true" : "false");
}