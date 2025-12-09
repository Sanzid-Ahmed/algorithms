#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr + n); // Step 1: Sort the array

    int left = 0, right = n;

    // Binary search to find the first mismatch: nums[mid] != mid
    while(left < right) {
        int mid = left + (right - left) / 2;

        if(arr[mid] == mid) {
            // Missing number is on the right side
            left = mid + 1;
        } else {
            // Missing number is on the left side
            right = mid;
        }
    }

    // left will be the missing number
    cout << left << endl;

    return 0;
}
