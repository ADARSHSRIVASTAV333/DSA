#include <bits/stdc++.h>
using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(n)

class Solution {
public:
    string reverseWords(string s) {
        string ans = "";              // Stores the final reversed string
        int i = s.size() - 1;         // Start from the end of the string

        // Traverse the string from right to left
        while (i >= 0) {

            // Skip trailing or extra spaces
            while (i >= 0 && s[i] == ' ') {
                i--;
            }

            // If end of string is reached, exit loop
            if (i < 0) break;

            int j = i;                // Mark the end of the current word

            // Move j to the start of the current word
            while (j >= 0 && s[j] != ' ') {
                j--;
            }

            // Add a space before adding a new word (except for first word)
            if (!ans.empty()) {
                ans += ' ';
            }

            // Extract the word and append to result
            ans += s.substr(j + 1, i - j);

            // Move i to the character before the current word
            i = j - 1;
        }

        return ans;                   // Return the reversed words string
    }
};

int main() {
    string s;

    // Read entire input line including spaces
    getline(cin, s);

    Solution obj;

    // Print reversed words
    cout << obj.reverseWords(s);

    return 0;                         // End of program
}
