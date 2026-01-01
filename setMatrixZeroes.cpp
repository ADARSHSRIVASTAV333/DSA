#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(m * n)
// Space Complexity : O(m + n)

class Solution{
    public:
        void setZeroes(vector<vector<int>> &matrix){
            int m = matrix.size();
            int n = matrix[0].size();
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