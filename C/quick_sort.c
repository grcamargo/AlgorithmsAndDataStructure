#include <stdio.h>

void print_array(int *arr, int sizeArr) {

    for(int i = 0; i < sizeArr; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    
}

void quick_sort(int *arr, int sizeArr) {

}


int main() {

    int arr[] = {5,8,2,9,3,6,4,7,1,11,19,15,16,12,17,13,20,10,14,18};
    int sizeArr = sizeof(arr) / sizeof(arr[0]); 

    print_array(arr, sizeArr);
    
    quick_sort(arr, sizeArr);

    print_array(arr, sizeArr);

    return 0;
}