#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int temp = x;
        
        while(temp>0){
            sum += temp % 10;
            temp = temp / 10;
        }

        if(x % sum == 0){
            return sum;
        }
        return -1;
    }
};

int main()
{
    int x;
    cin >> x;
    Solution obj;
    cout << obj.sumOfTheDigitsOfHarshadNumber(x);
}