#include <stdio.h>

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}


void quickSort(int arr[], int size){
    int max = arr[0];

    for(int i = 0; i < size; i++){
        if(arr[i] > max)
            max = arr[i];
    }

    int array[max + 1];
    for(int i = 0; i <= max; i++){
        array[i] = 0;
    }


    for(int i = 0; i < size; i++){
        array[arr[i]]++;
    }

    int index = 0;
    for(int i = 0; i <= max; i++){
        while(array[i] > 0){
            arr[index] = i;
            index++;
            array[i]--;
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
    quickSort(arr, size);
    printArray(arr, size);


    return 0;

}
