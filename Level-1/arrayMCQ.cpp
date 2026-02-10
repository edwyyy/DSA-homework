/* "https://www.codechef.com/practice/course/arrays/ARRAYS/problems/DISCOUNTT" */

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

void solution() {
    int n, x, y;
    cout<<"Enter total number of items: ";
    cin >> n ;
    cout<<"cost of coupon: ";
    cin >> x ;  
    cout<<"discount on each item: ";
    cin >> y ;  

    cout<<"Enter the cost of each item: ";
    vector < int > a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    int total = accumulate(a.begin(), a.end(), 0);
    
    int total_with_discount=x;
    for(int k:a){
        total_with_discount+=max(k-y,0);
    }
    
    if(total>total_with_discount){
        cout<<"COUPON"<<endl;
    }
    else {
        cout<<"NO COUPON"<<endl;
    }
}

int main(){
    int t;
    cout<<"Enter number of test cases: "; 
    cin>>t;
    while(t--) solution();
    return 0;
}