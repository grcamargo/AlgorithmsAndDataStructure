#include <stdio.h>

int* binary_search(int* arr, int elem) {
    int index_elem;



    return index_elem;
}

int* binary_search_recursive(int* arr, int elem) {
    int index_elem;


    return index_elem;
}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int elem, index;

    scanf("%d", &elem);

    index = binary_search(arr, elem);

    printf("index: %d\n", index);

    index = binary_search_recursive(arr, elem);

    printf("index recursive: %d\n", index);

    return 0;
}