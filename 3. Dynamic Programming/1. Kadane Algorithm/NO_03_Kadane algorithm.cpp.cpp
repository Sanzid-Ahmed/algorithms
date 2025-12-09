#include <iostream>
#include <climits>
using namespace std;

int main(){
    int size;
    cout << "Enetr the size of the array: \n";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: \n";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }


    int max_sum = INT_MIN;
    int current_sum = 0;

    for(int i = 0; i < size; i++){
        current_sum += arr[i];
        max_sum = max(current_sum, max_sum);
        if(current_sum < 0)
        current_sum = 0;
    }

    cout << max_sum;


    return 0;
}