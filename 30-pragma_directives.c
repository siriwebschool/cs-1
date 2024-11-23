// header.h
#pragma once

void print_message();

// main.c
#include "Users\Safvan\Documents\github\cs-1\header.h"
#include "Users\Safvan\Documents\github\cs-1\header.h"  // No problem, "header.h" will only be included once

int main() {
    print_message();
    return 0;
}



//Control Data Alignment
// #include <stdio.h>

// #pragma pack(push, 1)  // Set alignment to 1 byte

// struct MyStruct {
//     char a;  // 1 byte
//     int b;   // 4 bytes (normally would be padded to 4-byte alignment)
// };

// #pragma pack(pop)  // Restore default alignment

// int main() {
//     struct MyStruct s = {'A', 100};
//     printf("Size of MyStruct: %zu bytes\n", sizeof(s));  // Should print 5 bytes
//     return 0;
// }


//Control Compiler Warning
// #include <stdio.h>

// #pragma GCC diagnostic push
// #pragma GCC diagnostic ignored "-Wunused-variable"  // Disable unused variable warning

// int unused_variable;  // This will not generate a warning

// #pragma GCC diagnostic pop  // Restore previous warning state

// int main() {
//     printf("Hello, World!\n");
//     return 0;
// }

//Pragma Inline
// #include <stdio.h>

// #pragma GCC optimize("inline")  // Suggest inlining this function

// inline int add(int a, int b) {
//     return a + b;
// }

// int main() {
//     int result = add(2, 3);
//     printf("Sum: %d\n", result);
//     return 0;
// }


//