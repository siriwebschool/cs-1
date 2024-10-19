
#include <stdio.h>
int main() {
    long nc = 0;  // Use long to handle large counts (though int would be sufficient for most cases)
    int c;          // Variable to hold each character read from input

    // Read characters one by one until EOF is encountered
    while ((c = getchar()) != EOF) {
        ++nc;  // Increment character count
    }

    // Print the total count of characters
   printf("Total characters:%ld\n", nc);
    return 0;
}