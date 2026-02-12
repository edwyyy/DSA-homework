/* https://leetcode.com/problems/fibonacci-number/description/ */

/*

Approach:
Recursive approach - compute fib(n) by adding fib(n-1) + fib(n-2)
Base cases: fib(0) = 0, fib(1) = 1

*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n == 0)
            return 0;

        if (n == 1)
            return 1;

        int ans = fib(n - 1) + fib(n - 2);

        return ans;
    }
};

/*
TIME COMPLEXITY:
Best: O(1) - when n = 0 or 1
Worst: O(2^n) - many overlapping recursive calls
Average: O(2^n)

SPACE COMPLEXITY: O(n) - recursion call stack depth 
*/