#include <stdio.h>

void modifyArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] += 10;  // Access and modify the original array elements
    }
}

int main() {
    int arr[3] = {1, 2, 3};
    
    printf("Before modifyArray: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i]);  // Output: 1 2 3
    }
    printf("\n");
    
    modifyArray(arr, 3);  // Pass the array
    
    printf("After modifyArray: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i]);  // Output: 11 12 13
    }
    printf("\n");
    return 0;
}

