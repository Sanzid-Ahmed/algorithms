#include <stdio.h>


void search(int arr[], int size, int key){
    int low = 0;
    int high = size - 1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(arr[mid] == key){
            printf("true");
            return;
        }

        if(arr[mid] >= arr[low]){
            if(key >= arr[low] && key < arr[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        else{
            if(key > arr[mid] && key <= arr[high]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }

    if(low > high){
        printf("false");
    }
}


int main(){
    int size;
    scanf("%d", &size);

    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int key;
    scanf("%d", &key);


    search(arr, size, key);

    return 0;
}
