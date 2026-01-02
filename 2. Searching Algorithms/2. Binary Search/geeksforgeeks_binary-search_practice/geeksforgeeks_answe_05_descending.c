#include <stdio.h>



void search(int arr[], int size, int k){
    int low = 0;
    int high = size - 1;

    while(low <= high){
        int mid = low + (high - low)/ 2;

        if(arr[mid] == k){
            printf("%d", mid);
            return;
        }

        if(arr[mid] <= arr[low]){
            if(k <= arr[low] && k > arr[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        else{
            if(k < arr[mid] && k >= arr[high]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }

    if(low > high){
        printf("-1");
    }
}



int main(){
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    search(arr, size, k);


    return 0;
}
