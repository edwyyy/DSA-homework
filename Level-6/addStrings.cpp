/* https://leetcode.com/problems/add-strings/description/ */

#include <bits/stdc++.h>
using namespace std;

/* add digits from right to left with carry; build reversed result and reverse at end. */

class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size() - 1; // index for num1 (LSD)
        int j = num2.size() - 1; // index for num2 (LSD)
        int carry = 0;           // carry
        string res;              // result (reversed)

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += num1[i--] - '0';
            if (j >= 0) sum += num2[j--] - '0';
            carry = sum / 10;
            res.push_back('0' + (sum % 10));
        }

        reverse(res.begin(), res.end());
        return res;
    }
};

/*
  Time: 
  Best/Avg/Worst:  O(max(n,m))  
  Space: O(max(n,m))
*/