/* https://leetcode.com/problems/powx-n/description/ */

/*
APPROACH:
Binary exponentiation; compute x^n by repeatedly squaring x and dividing n by 2.
Handle negative n by converting to positive and taking reciprocal.
Use recursion with optimization: x^n = (x^2)^(n/2) or x * (x^2)^((n-1)/2) if n is odd.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        return binaryExp(x, static_cast<long>(n));
    }

private:
    double binaryExp(double x, long n) {
        if (n == 0) {
            return 1;
        }
       
        if (n < 0) {
            return 1.0 / binaryExp(x, -n);
        }
       
        if (n % 2 == 1) {
            return x * binaryExp(x * x, (n - 1) / 2);
        } else {
            return binaryExp(x * x, n / 2);
        }
    }
};

/*
TIME COMPLEXITY:
Best: O(log n) - when n is power of 2
Worst: O(log n) - dividing n by 2 each time
Average: O(log n)

SPACE COMPLEXITY: O(log n)
*/