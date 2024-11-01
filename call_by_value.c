#include <stdio.h>

// Function to attempt to change the value of a
void modifyValue(int a) {
    a = 10;  // Change the local copy of a inside the function
}

int main() {
    int a = 5;  // Initialize variable a
    printf("Before modifyValue: a = %d\n", a);  // Print value of a before function call

    modifyValue(a);  // Call the function with a as argument

    printf("After modifyValue: a = %d\n", a);  // Print value of a after function call
    return 0;
}