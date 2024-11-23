#include <stdio.h>

#define WINDOWS 1  // Set to 1 for Windows, 0 for Linux

int main() {
    #if WINDOWS
        printf("Running on Windows platform.\n");
    #else
        printf("Running on Linux platform.\n");
    #endif

    return 0;
}


//Multiple Conditions
// #include <stdio.h>

// #define VERSION 2

// int main() {
//     #if VERSION == 1
//         printf("Version 1 selected.\n");
//     #elif VERSION == 2
//         printf("Version 2 selected.\n");
//     #else
//         printf("Unknown version.\n");
//     #endif

//     return 0;
// }


//error msg
// Check for the C standard version
// #if __STDC_VERSION__ < 201112L
// #error "This code requires C11 or later. Please enable C11 support."
// #endif

// #include <stdio.h>

// int main() {
//     printf("This code is compiled with C11 or later.\n");
//     return 0;
// }