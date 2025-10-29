#include<bits/stdc++.h>
using namespace std;

// Method 1 (nCr approach)
// Time Complexity : O(n^2)   -> computing nCr for each col
// Space Complexity : O(1) aux (O(n) for output vector)

// class Solution{
//     public:
//         long long pascalTriangle(int r,int c){
//             long long res = 1;
//             for(int i=0;i<c;i++){
//                 res = res*(r-i);
//                 res = res/(i+1);
//             }
//             return res;
//         }
        
//         vector<int> getRow(int rowIndex){
//             int n = rowIndex;
//             vector<int> result;
//             for(int col=0;col<=n;col++){
//                 result.push_back(pascalTriangle(n,col));
//             }
//             return result;
//         }
// };

// Method 2 (iterative / previous element relation)
// Time Complexity : O(n)
// Space Complexity : O(1) aux (O(n) for output)
class Solution {
public:
    vector<int> getRow(int rowIndex) {

        int n = rowIndex;
        vector<int> row;
        row.push_back(1);
        long long res = 1;

        for(int col=1;col<=n;col++){
            res = res*(n-col+1);
            res = res/col;
            row.push_back(res);
        }
        return row;
    }
};

int main()
{
    int rowIndex;
    cout << "RowIndex : ";
    cin >> rowIndex;
    Solution obj;
    vector<int> ans = obj.getRow(rowIndex);
    for(auto &val : ans){
        cout << val << " ";
    }
    cout << endl;
}