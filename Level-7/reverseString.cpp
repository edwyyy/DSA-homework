/* https://leetcode.com/problems/reverse-string/description/ 

APPROACH:
Two-pointer technique - place pointers at start and end,
swap characters and move pointers towards center until they meet. */

#include <bits/stdc++.h>
using namespace std;

#include<vector>
using namespace std;
class Solution{
public:
void reverseString(vector<char>&s){
int left=0,right=s.size()-1;
while(left<right){
swap(s[left],s[right]);
left++;
right--;
}
}
};

/*
TIME COMPLEXITY:
Best: O(n)
Worst: O(n)
Average: O(n)

SPACE COMPLEXITY: O(1) - only pointers, in-place swap
*/
