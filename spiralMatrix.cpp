#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(m * n)
// Space Complexity : O(1)

//The while loop controls layer-by-layer traversal, 
//and the if conditions prevent revisiting elements when only one row or column remains.
class Solution{
    public:
        vector<int> spiralOrder(vector<vector<int>> &matrix){
            int m = matrix.size();
            int n = matrix[0].size();
            int right = n-1;
            int bottom = m-1;
            int left = 0;
            int top = 0;
            vector<int> ans;
            
            while(top<=bottom && left<=right){

                // Traverse top row (left → right)
                for(int i=left;i<=right;i++){
                    ans.push_back(matrix[top][i]);  //right
                }
                top++;

                // Traverse right column (top → bottom)
                for(int i=top;i<=bottom;i++){
                    ans.push_back(matrix[i][right]);  //bottom
                }
                right--;

                // Traverse bottom row (right → left)
                if(top<=bottom){
                    for(int i=right;i>=left;i--){
                        ans.push_back(matrix[bottom][i]);  //left
                    }
                    bottom--;
                }

                // Traverse left column (bottom → top)
                if(left<=right){
                    for(int i=bottom;i>=top;i--){
                        ans.push_back(matrix[i][left]);  //top
                    }
                    left++;
                }
            }
            return ans;
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
    vector<int> result = obj.spiralOrder(matrix);
    for(auto &val : result){
        cout << val << " ";
    }
}