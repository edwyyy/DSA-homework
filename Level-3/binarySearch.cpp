/*"https://leetcode.com/problems/binary-search/description/"*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        // Initialize left and right pointers for search range
        int left = 0;
        int right = nums.size() - 1;
        
        // Continue searching while left <= right
        while (left <= right) {
            // Calculate mid to avoid overflow
            int mid = left + (right - left) / 2;
            
            // Target found at mid position
            if (nums[mid] == target) {
                return mid;
            } 
            // Target is in right half, move left pointer
            else if (nums[mid] < target) {
                left = mid + 1;  
            } 
            // Target is in left half, move right pointer
            else {
                right = mid - 1;  
            }
        }
        
        // Target not found in array
        return -1;  
    }
};

/*
Time Complexity;
Best: O(1) - target found at mid position on first check
Average: O(log n) 
Worst: O(log n) - target at end or not present, divide n by 2 repeatedly log n times
(Each iteration eliminates half of remaining elements)

Space Complexity: O(1) 
*/