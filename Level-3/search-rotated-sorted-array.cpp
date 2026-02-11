/* Link: https://leetcode.com/problems/search-in-rotated-sorted-array/ */

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;               // left boundary of current search window
        int r = n - 1;           // right boundary of current search window

        while (l <= r) {
            int mid = l + (r - l) / 2; // safe midpoint to avoid overflow

            // Found target
            if (nums[mid] == target) return mid;

            // If left half [l..mid] is sorted
            if (nums[mid] >= nums[l]) {
                // If target lies inside the sorted left half, move right boundary
                if (target >= nums[l] && target < nums[mid])
                    r = mid - 1;
                else
                    // Otherwise target must be in rotated right half
                    l = mid + 1;
            }
            else {
                // Right half [mid..r] is sorted
                if (target > nums[mid] && target <= nums[r])
                    l = mid + 1; // target is inside sorted right half
                else
                    r = mid - 1; // otherwise target is in rotated left half
            }
        }

        // Not found
        return -1;
    }
};

/*  Time Complexity:
  Best: O(1) when the first mid equals target.
  Average: O(log n) because each iteration halves the search space.
  Worst: O(log n) when target is absent or found after O(log n) steps.

  Space Complexity: O(1) */