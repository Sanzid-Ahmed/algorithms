#include <stdio.h>

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}


void insertionSort(int arr[], int size){
    for(int i = 1; i < size; i++){
        int key = arr[i];
        int j = i - 1;

        while(arr[j] > key && j >= 0){
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("\nEnter the elements of the array: \n");
    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nArray before sorting: ");
    printArray(arr, size);
    printf("\nArray after sorting: ");
    insertionSort(arr, size);
    printArray(arr, size);


    return 0;

}
