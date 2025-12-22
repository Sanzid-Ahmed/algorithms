#include <stdio.h>


void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}


void countingSort(int arr[], int size){
    for(int i = 0; i < size; i++){
        int minIndex = i;

        for(int j = i + 1; j < size; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
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
    countingSort(arr, size);
    printArray(arr, size);


    return 0;

}
