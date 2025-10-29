#include<bits/stdc++.h>
using namespace std;

// Time Complexity (Strict):  O(N^3)
// Commonly Accepted (Loose): O(N^2)
// Space Complexity: O(1) auxiliary, O(N^2) for output

// class Solution{
//     public:
//         int pascalTriangle(int r,int c){
//             int res = 1;
//             for(int i=0;i<c;i++){
//                 res = res*(r-i);
//                 res = res/(i+1);
//             }
//             return res;
//         }
        
//         vector<vector<int>> generate(int numRows){
//             int n = numRows;   
//             vector<vector<int>> ans;
//             for(int row=0;row<n;row++){
//                 vector<int> currentRow;
//                 for(int col=0;col<=row;col++){
//                     currentRow.push_back(pascalTriangle(row,col));
//                 }
//                 ans.push_back(currentRow);
//             }
//             return ans;
//         }
// };

// Time Complexity:  O(N^2)
// Space Complexity: O(1) auxiliary, O(N^2) for output

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n = numRows;
        vector<vector<int>> ans;
        
        for(int row=0;row<n;row++){
            int res = 1;
            vector<int> currentRow;
            currentRow.push_back(1);   // first element of every row is 1
            
            for(int col=1;col<=row;col++){
                res = res*(row-col+1);
                res = res/col;
                currentRow.push_back(res);
            }
            ans.push_back(currentRow);
        }
        return ans;
    }
};

int main()
{
    int numRows;
    cin >> numRows;
    Solution obj;
    vector<vector<int>> result = obj.generate(numRows);
    for(auto &row : result){
        for(auto &val : row){
            cout << val << " ";
        }
        cout << endl;
    }
}