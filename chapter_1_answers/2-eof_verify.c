#include <stdio.h>


int main() {
    int result;


    printf("Enter a character (or press Ctrl+D to simulate EOF on Unix/Linux, Ctrl+Z on Windows):\n");


    // Evaluate getchar() != EOF
    result = (getchar() != EOF);


    // Print the result, which should be either 0 (EOF) or 1 (not EOF)
    printf("The expression getchar() != EOF evaluates to: %d\n", result);


    return 0;
}
