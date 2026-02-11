/*
  Link: https://leetcode.com/problems/peak-index-in-a-mountain-array/

  Approach:
  We maintain a search window [low, high]. At each step compute mid = low + (high-low)/2.
  If arr[mid] < arr[mid+1], we are on the increasing slope, so the peak must be to the right of mid -> move low = mid+1.
  Otherwise we are on the decreasing slope (or at the peak), so the peak is at mid or to the left -> move high = mid.
  Loop until low == high, which will be the peak index.
*/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0;
        int high = arr.size()-1;

        while (high > low) {
            int mid = low + (high - low) / 2;
            if (arr[mid] < arr[mid+1])
                low = mid + 1;
            else
                high = mid;
        }
        return low;
    }
};

/* Time Complexity:
  - Best: O(log n)
  - Average: O(log n)
  - Worst: O(log n)

  Space Complexity: O(1)  */