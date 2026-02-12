/* https://leetcode.com/problems/remove-outermost-parentheses/description/ */

/*
APPROACH:
Counter-based approach - track count of open parentheses.
Add opening bracket only if count > 0 before incrementing.
Add closing bracket only if count > 1 before decrementing.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string S) {
        string res;
        int opened = 0;
        for (char c : S) {
            if (c == '(' && opened++ > 0) res += c;
            if (c == ')' && opened-- > 1) res += c;
        }
        return res;
    }
};

/*
TIME COMPLEXITY:
Best,Worst,Average: O(n)

SPACE COMPLEXITY: O(n) - result string stores up to n characters
*/