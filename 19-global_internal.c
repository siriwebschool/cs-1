#include <stdio.h>

// Internal variable
static int internalVar = 10;  // This variable is not accessible from other files
int globalVar = 3;  // This variable is accessible from other files
void function() {
    globalVar += 10;
    printf("Internal Variable (static): %d\n", internalVar);

}
