#include <stdio.h>

void lowerBound(int arr[], int size, int key){
    int low = 0;
    int high = size - 1;


    int ans = -1;
    while(low <= high){
        int mid = low + (high - low)/ 2;

        if(arr[mid] >= key){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    printf("%d", arr[ans]);
}


void upperBound(int arr[], int size, int key){
    int low = 0;
    int high = size - 1;

    int ans = -1;
    while(low <= high){
        int mid = low + (high - low)/2;

        if(arr[mid] > key){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    printf("\n%d", arr[ans]);
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

    lowerBound(arr, size, key);
    upperBound(arr, size, key);

    return 0;
}
