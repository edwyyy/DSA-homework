/* https://leetcode.com/problems/to-lower-case/description/ */

#include <bits/stdc++.h>
using namespace std;

//convert each character to lowercase in-place using tolower().
 
class Solution {
public:
    string toLowerCase(string s) {
        for(char &c : s) {
            c = tolower(c);
        }
        return s;
    }
};

//  Time:  O(n) [ Best/Avg/Worst where n = s.length()]
// Space: O(1)   
