#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(m * n)
// Space Complexity : O(m + n) for two auxiliary arrays

class Solution{
    public:
        void setZeroes(vector<vector<int>> &matrix){

            int m = matrix.size();
            int n = matrix[0].size();
            
            // Arrays to mark rows and columns that need to be zeroed
            vector<bool> zeroRow(m,false);
            vector<bool> zeroCol(n,false);
            
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(matrix[i][j] == 0){
                        zeroRow[i] = true;
                        zeroCol[j] = true;
                    }
                }
            }
            
            for(int i=0;i<m;i++){
                if(zeroRow[i]){
                    for(int j=0;j<n;j++){
                        matrix[i][j] = 0;
                    }
                }
            }
            
            for(int j=0;j<n;j++){
                if(zeroCol[j]){
                    for(int i=0;i<m;i++){
                        matrix[i][j] = 0;
                    }
                }
            }
        }
};

// Optimal Approach: Using First Row and First Column as Markers
// Time Complexity : O(m * n)
// Space Complexity : O(1)

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        bool firstRowZero = false;
        bool firstColZero = false;

        // Step 1: check first row
        for (int j = 0; j < n; j++) {
            if (matrix[0][j] == 0) {
                firstRowZero = true;
                break;
            }
        }

        // Step 1: check first column
        for (int i = 0; i < m; i++) {
            if (matrix[i][0] == 0) {
                firstColZero = true;
                break;
            }
        }

        // Step 2: mark rows and columns
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Step 3: set zeroes using markers
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Step 4: zero first row if needed
        if (firstRowZero) {
            for (int j = 0; j < n; j++) {
                matrix[0][j] = 0;
            }
        }

        // Step 4: zero first column if needed
        if (firstColZero) {
            for (int i = 0; i < m; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};


int main()
{
    int row,col;
    cin >> row >> col;
    vector<vector<int>> matrix(row,vector<int>(col));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin >> matrix[i][j];
        }
    }
    Solution obj;
    obj.setZeroes(matrix);
    for(auto &row : matrix){
        for(auto &val : row){
            cout << val << " ";
        }
        cout << endl;
    }
}