/* https://leetcode.com/problems/move-zeroes/description/ */

#include <bits/stdc++.h>
using namespace std;    

class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int j = -1;
        int n = a.size();

        // Find first zero position
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                j = i;
                break;
            }
        }

        if (j == -1)
            return; // No zero found, array already valid

        // Swap non-zero elements with zero position, moving zeros to end
        for (int i = j + 1; i < n; i++) {
            if (a[i] != 0) {
                swap(a[i], a[j]);
                j++;
            }
        }
    }
};

int main() {
    Solution sol;
    int n;
    // Input array elements
    cout << "Enter the number of elements: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> arr(a, a + n);
    sol.moveZeroes(arr);
    cout << "Array after moving zeros: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

//time complexity: O(n)
//space complexity: O(1)