#include <stdio.h>

int binary_search(int *arr, int size, int elem) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int middle = (left + right) / 2;
        int guess = arr[middle];

        if (guess == elem) {
            return middle;  // encontrado
        }

        if (guess > elem) {
            right = middle - 1;
        } else {
            left = middle + 1;
        }
    }

    return -1; // não encontrado
    
}

int binary_search_recursive(int* arr, int begin, int end, int elem) {

    int middle = (begin + end) / 2;

    if(begin > end){
        return -1;
    }

    if(arr[middle] == elem) return middle;
    if(arr[middle] > elem) return binary_search_recursive(arr, begin, middle - 1, elem);

    return binary_search_recursive(arr, middle + 1, end, elem);
    
}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int elem, index;

    scanf("%d", &elem);

    index = binary_search(arr, size, elem);

    printf("index: %d\n", index);

    index = binary_search_recursive(arr, 0, size - 1, elem);

    printf("index recursive: %d\n", index);

    return 0;
}