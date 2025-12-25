#include <stdio.h>


void binarySearch(int arr[], int size, int num){
    int first = 0;
    int last = size - 1;

    int index = -1;
    while(first <= last){
        int mid = first + (last - first)/2;

        if(arr[mid] == num){
            index = mid;
            last = mid - 1;
        }
        else if(arr[mid] > num){
            last = mid - 1;
        }
        else{
            first = mid + 1;
        }
    }


    if(index != -1){
        printf("%d", index);
    }
    else{
        printf("-1");
    }
}


int main(){
    printf("Enter array size: ");
    int size;
    scanf("%d", &size);

    printf("\nEnter the elements of the array: ");
    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the target: ");
    int num;
    scanf("%d", &num);

    binarySearch(arr, size, num);

    return 0;
}
