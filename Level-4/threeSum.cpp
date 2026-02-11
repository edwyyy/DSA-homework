/*https://leetcode.com/problems/3sum/description/*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        // Sort array for better comparison and duplicate handling
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            // Skip duplicate fixed elements
            if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            
            // Two pointers approach: find pairs that sum to -nums[i]
            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k) {
                int total = nums[i] + nums[j] + nums[k];

                // Move pointers based on sum
                if (total > 0) {
                    k--;
                } else if (total < 0) {
                    j++;
                } else {
                    // Found triplet, add to result
                    res.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    // Skip duplicate pairs
                    while (nums[j] == nums[j-1] && j < k) {
                        j++;
                    }
                }
            }
        }
        return res;        
    }
};

int main() {
    Solution sol;
    int n;
    // Input array size and elements
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Find and display all unique triplets
    vector<vector<int>> result = sol.threeSum(nums);
    cout << "Unique triplets that sum to zero:" << endl;
    for (const auto& triplet : result) {
        cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "]" << endl;
    }

    return 0;
}   

//time complexity: O(n^2)
//space complexity: O(1) (excluding the space for the output)