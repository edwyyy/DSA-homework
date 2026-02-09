/* https://www.codingninjas.com/studio/problems/largest-element-in-the-array-largest-element-in-the-array_5026279*/


#include <bits/stdc++.h>
using namespace std;

    int largestElement(vector<int> &arr, int n) {
    int i, max=arr[0]; //creating a var max to store maximum val after each iteration in arr, with default val arr[0]
    for(i=0;i<n;++i){  //traversig through the array

        if(arr[i]>max){   // comparing each val from array to max var val
            max=arr[i];   // updating var max with the current element 
        }

    }
    return max; //returning the max value from array
5

}

int main() {
int n;
cout << "Enter the size of the array: ";
if (!(cin >> n) || n <= 0) return 0;
vector<int> arr(n);
cout << "Enter the elements of the array: ";
for (int i = 0; i < n; ++i) cin >> arr[i];
cout << largestElement(arr, n) << '\n';
return 0;
}



//timecomplexity:
//best:O(n)
//avg:O(n) 
//worst:O(n)
//space complexity: O(1)