#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int pascalTriangle(int r,int c){
            int res = 1;
            for(int i=0;i<c;i++){
                res = res*(r-i);
                res = res/(i+1);
            }
            return res;
        }
        
        vector<vector<int>> generate(int numRows){
            int n = numRows;   
            vector<vector<int>> ans;
            for(int row=0;row<n;row++){
                vector<int> currentRow;
                for(int col=0;col<=row;col++){
                    currentRow.push_back(pascalTriangle(row,col));
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