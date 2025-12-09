#include <iostream>
using namespace std;


void ascendingInsertionSort(int arr[], int size){
    for(int i = 1; i < size; i++){
        int key = arr[i];
        int j = i - 1;


        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}


void descendingInsertionSort(int arr[], int size){
    for(int i = 1; i < size; i++){
        int key = arr[i];
        int j = i - 1;


        while(j >= 0 && arr[j] < key){
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}


int main(){
    int arr[] = {5, 11, 105, 66, 2, 128};
    int size = sizeof(arr)/ sizeof(arr[0]);

    cout << "Orginal array => " << endl;
    for(int i : arr){
        cout << i << " ";
    }


    cout << "\n\nArray after sorting ascending order => " << endl;
    ascendingInsertionSort(arr, size);
    for(int i : arr){
        cout << i << " ";
    }


    cout << "\n\nArray after sorting in descending order => " << endl;
    descendingInsertionSort(arr, size);
    for(int i: arr){
        cout << i << " ";
    }

    return 0;
}
