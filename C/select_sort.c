#include <stdio.h>

void print_array(int *arr, int sizeArr) {

    for(int i = 0; i < sizeArr; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    
}

void select_sort(int *arr, int sizeArr) {
    int aux = 0;

    for(int i = 0; i < sizeArr; i++) {
        for(int j = 0; j < sizeArr; j++) {
            if(arr[i] < arr[j]) {
                aux = arr[j];
                arr[j] = arr[i];
                arr[i] = aux;
            } 
        }
    }

}

int main() {
    int arr[] = {5,8,2,9,3,6,4,7,1,11,19,15,16,12,17,13,20,10,14,18};
    int sizeArr = sizeof(arr) / sizeof(arr[0]); 

    print_array(arr, sizeArr);
    
    select_sort(arr, sizeArr);

    print_array(arr, sizeArr);

    return 0;
}