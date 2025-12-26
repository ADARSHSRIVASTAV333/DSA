#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(rows * cols)
// Space Complexity : O(rows * cols)

class Solution{
    public:
        vector<vector<int>> transpose(vector<vector<int>> &matrix){

            int rows = matrix.size();
            int cols = matrix[0].size();

            vector<vector<int>> ans(cols,vector<int>(rows));
            
            for(int i=0;i<rows;i++){
                for(int j=0;j<cols;j++){
                    ans[j][i] = matrix[i][j];
                }
            }
            return ans;
        }
};

int main()
{
    int rows,cols;
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows,vector<int>(cols));

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin >> matrix[i][j];
        }
    }

    Solution obj;
    vector<vector<int>> result = obj.transpose(matrix);

    for(auto &row : result){
        for(auto &val : row){
            cout << val << " ";
        }
        cout << endl;
    }

    // for(int i=0;i<result.size();i++){
    //     for(int j=0;j<result[0].size();j++){
    //         cout << result[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}