#include <stdio.h>


void search(int arr[], int size){
    int low = 0;
    int high = size - 1;


    int ans = 0;
    while(low <= high){
        int mid = low + (high - low)/2;

        if(arr[mid] > arr[mid + 1]){
            if(arr[mid] > arr[ans]){
                ans = mid;
            }

            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    printf("%d", arr[ans]);
}




int main(){
    int size;
    scanf("%d", &size);

    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }


    search(arr, size);
    return 0;
}
