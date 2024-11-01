#include <stdio.h>

/* count digits, white space, others */

int main() {
    int c, i, nwhite, nother;
    int ndigit[10];

    // Initialize counts for digits, white space, and others
    nwhite = nother = 0;

    // Initialize the digit count array to zero
    for (i = 0; i < 10; ++i) {
        ndigit[i] = 0;
    }

    // Read characters from input until EOF is encountered
    while ((c = getchar()) != EOF) {
        // Check if character is a digit
        if (c >= '0' && c <= '9') {
            ++ndigit[c - '0']; // Increment count for the corresponding digit
        }
        // Check if character is white space (space, newline, or tab)
        else if (c == ' ' || c == '\n' || c == '\t') {
            ++nwhite; // Increment white space count
        }
        // If not a digit or white space, it's classified as "other"
        else {
            ++nother; // Increment other character count
        }
    }

    // Print the digit counts
    printf("Digits =");
    for (i = 0; i < 10; ++i) {
        printf(" %d", ndigit[i]);
    }

    // Print the counts of white space and other characters
    printf(", White space = %d, Other = %d\n", nwhite, nother);

    return 0;
}