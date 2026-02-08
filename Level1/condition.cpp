/*In ChefLand, human brain speed is measured in bits per second (bps). Chef has a threshold limit of X,
X bits per second above which his calculations are prone to errors. If Chef is currently working at Y,
Y bits per second, is he prone to errors? If Chef is prone to errors print YES, otherwise print NO.*/

#include <iostream>

using namespace std;

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    // your code goes here
    if (x >= y) {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }
    return 0;
}