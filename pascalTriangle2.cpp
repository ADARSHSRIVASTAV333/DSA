#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        long long pascalTriangle(int r,int c){
            long long res = 1;
            for(int i=0;i<c;i++){
                res = res*(r-i);
                res = res/(i+1);
            }
            return res;
        }
        
        vector<int> getRow(int rowIndex){
            int n = rowIndex+1;
            vector<int> result;
            for(int col=1;col<=n;col++){
                result.push_back(pascalTriangle(n-1,col-1));
            }
            return result;
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