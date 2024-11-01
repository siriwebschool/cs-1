#include <stdio.h>

// Function to attempt to change the value of a
void modifyValue(int *a) {
    *a = 10;  // Changes the value of the variable pointed to by a
}

int main() {
    int a = 5;
    modifyValue(&a);  // Pass the address of a to modifyValue
    printf("%d\n", a);  // Output will be 10
    return 0;
}