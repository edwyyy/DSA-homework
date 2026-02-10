/* "https://www.naukri.com/code360/problems/second-largest-element-in-the-array_873375"*/


/* first we run a loop and find the largest element in array and store it in var max, the second_max var used to store the second largest element in array,
we compare each element of array with max var and if we find any element greater than max then we update second_max with max and max with current element*/

#include <bits/stdc++.h> 

using namespace std;

int findSecondLargest(int n, vector<int> &a)
{
 int max=a[0];
 int second_max=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            second_max=max;
            max=a[i];
        }
        else if(a[i]>second_max && a[i]!= max){  //element greater than second_max and not equal to max then we update second_max with current element.
            second_max=a[i];
        }
    }

    if(second_max==INT_MIN){  

        return -1;  // if there is no second largest (second_max == INT_MIN) element in array and we return -1   
    }

    return second_max; //returning the second largest element in array
}

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; ++i) cin >> arr[i];
    cout << "The second largest element in the array is: " << findSecondLargest(n, arr) << endl;
    return 0;
}

//time complexity:
//best/worst/average: O(n) [we traverse the array once to find the second largest element]
//space complexity: O(1) [we use only a constant amount of extra space to store max and second_max]

