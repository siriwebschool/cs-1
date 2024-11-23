
// store more elements in an array than its defined size
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    
    // Attempt to write beyond the bounds of the array
    arr[6] = 60; // This is outside the allocated array bounds
    arr[7] = 70;

    // Print array elements
    for (int i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}





//gcc -fstack-protector-all -o canary_example array.c
//gcc -fno-stack-protector -o my_program array.c

// char name[] = "ChatGPT"= {'C', 'h', 'a', 't', 'G', 'P', 'T', '\0'}.

//#define SIZE 5  // Define a constant for the array size
