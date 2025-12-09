#include <iostream>
using namespace std;


void ascendingSelectionSort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        int minIndex = i;

        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }


        swap(arr[i], arr[minIndex]);
    }
}


void descendingSelectionSort(int arr[], int size){
    for(int i = 0; i < size; i++){
        int maxIndex = i;

        for(int j = i + 1; j < size; j++){
            if(arr[j] > arr[maxIndex])
                maxIndex = j;
        }


        swap(arr[i], arr[maxIndex]);
    }
}


int main(){
    int arr[] = {2, 55, 105, 100, 77, 777, 55};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array => " << endl;
    for(int i : arr){
         cout << i << " ";
    }

    cout << "\n\nArray after sorting in ascending order => "<< endl;
    ascendingSelectionSort(arr, size);
    for(int i : arr){
        cout << i << " ";
    }


    cout << "\n\nArray after sorting descending order => " << endl;
    descendingSelectionSort(arr, size);
    for(int i : arr){
        cout << i << " ";
    }

    return 0;
}
