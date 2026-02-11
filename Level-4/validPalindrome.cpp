/*https://leetcode.com/problems/valid-palindrome*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        // Extract only alphanumeric characters and convert to lowercase
        string filtered;
        for (char c : s) {
            if (isalnum(c)) {
                filtered += tolower(c);
            }
        }

        // Use two pointers from both ends to compare characters
        int left = 0;
        int right = filtered.size() - 1;

        // If any mismatch found, it's not a palindrome
        while (left < right) {
            if (filtered[left] != filtered[right]) {
                return false;
            }
            left++;
            right--;
        }

        // All characters matched, it's a palindrome
        return true;        
    }
};

int main() {
    // Get input and check if it's a palindrome
    Solution sol;
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    if (sol.isPalindrome(s)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    
    return 0;
}

//time complexity: O(n)
//space complexity: O(n)