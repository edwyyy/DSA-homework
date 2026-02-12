/* https://leetcode.com/problems/min-stack/description/


Approach:

Use a stack where each element stores two values → {value, current_min}.
While pushing: Compare the new value with the current minimum.
Store the updated minimum along with the value.
While popping:Simply remove the top element (min tracking is automatic).
top() returns the value part.
getMin() returns the stored minimum part from the top.*/

#include <bits/stdc++.h>
using namespace std;

class MinStack {
private:
    vector<vector<int>> st;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        int min_val = getMin();
        if (st.empty() || min_val > val) {
            min_val = val;
        }
        st.push_back({val, min_val});        
    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() {
        return st.empty() ? -1 : st.back()[0];
    }
    
    int getMin() {
        return st.empty() ? -1 : st.back()[1]; 
    }
};

/* 
Time Complexity:
Push - Best: O(1) | Avg: O(1) | Worst: O(1)
Pop - Best: O(1) | Avg: O(1) | Worst: O(1)
Top - Best: O(1) | Avg: O(1) | Worst: O(1)
getMin - Best: O(1) | Avg: O(1) | Worst: O(1)

Space Complexity: O(n) (each element stores value + min) */