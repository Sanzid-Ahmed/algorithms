#include<iostream>
using namespace std;


int firstIndexBinarySearch(int arr[], int size, int num){
    int start = 0;
    int end = size - 1;

    int index = -1;

    while(start <= end){
        int mid = start + (end - start)/ 2;

        if(arr[mid] == num){
            index = mid;
            end = mid - 1;
        }
        else if(arr[mid] > num){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }

    return index;
}


int lastIndexBinarySearch(int arr[], int size, int num){
    int start = 0;
    int end = size - 1;

    int index = -1;

    while(start <= end){
        int mid = start + (end - start)/ 2;

        if(arr[mid] == num){
            index = mid;
            start = mid + 1;
        }
        else if(arr[mid] > num){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }

    return index;
}


int main(){
    cout << "Enter the size of the array: " << endl;
    int size;
    cin >> size;

    cout << "\nEnter the elements of the array: " << endl;
    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int num;
    cout << "Enter the target: " << endl;
    cin >> num;

    int firstIndex = firstIndexBinarySearch(arr, size, num);
    int lastIndex = lastIndexBinarySearch(arr, size, num);

    cout << firstIndex << " " << lastIndex << endl;

    return 0;
}
