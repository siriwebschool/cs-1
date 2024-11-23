#include <stdio.h>

// Function prototype
void function(); 

// External variable
extern int globalVar;  

int main() {
    function();  // Call the function from the other file
    printf("Global Variable (extern): %d\n", globalVar);
    return 0;
}
