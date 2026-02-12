/* https://leetcode.com/problems/valid-parentheses/description/ */

/*
APPROACH:
Stack-based approach - push opening brackets onto stack, 
when closing bracket encountered check if it matches top of stack.
If stack is empty at end, all parentheses are valid.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char, char> mapping = {{')', '('}, {']', '['}, {'}', '{'}};

        for (char c : s) {
            if (mapping.find(c) == mapping.end()) {
                stack.push(c);
            } else if (!stack.empty() && mapping[c] == stack.top()) {
                stack.pop();
            } else {
                return false;
            }
        }

        return stack.empty();        
    }
};

/*
TIME COMPLEXITY:
Best: O(n) - single pass through string
Worst: O(n) - single pass through string
Average: O(n)

SPACE COMPLEXITY: O(n) - stack can hold up to n/2 opening brackets
*/