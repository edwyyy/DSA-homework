/*"https://leetcode.com/problems/two-sum/description/"*/

#include <bits/stdc++.h>    
using namespace std;

//logic: uses nested loops to check all possible pairs inside array to return the indices

//approach: brute force approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0; i<n-1;i++){     //first loop runs from 0 to n-1 
            for(int j=i+1; j<n;j++) {   //second loop runs from i+1 to n (help to avoid checking same pair twice)
                if(nums[i]+nums[j]==target){  
                    return {i,j};
                }
            }
        }
        return {}; //return not found case
    }
};

//to run the code and test it with user input

int main() {
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin >> n;
    vector<int> nums(n);
    cout<<"Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) cin >> nums[i];
    int target;
    cout<<"Enter the target value: ";
    cin >> target;

    Solution sol;
    cout << "Indices of the two numbers that add up to " << target << ": ";
    vector<int> res = sol.twoSum(nums, target);
    if (res.empty()) {
        cout << "No solution\n";
    } else {
        cout << res[0] << " , " << res[1] << "\n";
    }
    return 0;
}

//time complexity: 
//best case: O(1) when found on the first checked pair
//average case: O(n^2) because we are checking all pairs in average case
//worst case: O(n^2) when found on the last checked pair or not found at all
//space complexity: O(1) because we are not using any extra space