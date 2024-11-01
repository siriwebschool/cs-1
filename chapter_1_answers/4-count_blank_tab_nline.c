#include <stdio.h>
/* count digits, blanks, tabs, and newlines, and others */
int main() {
    int c, i, nblanks, ntabs, nnewlines, nother;
    int ndigit[10];


    // Initialize counts for digits, blanks, tabs, newlines, and others
    nblanks = ntabs = nnewlines = nother = 0;


    // Initialize the digit count array to zero
    for (i = 0; i < 10; ++i) {
        ndigit[i] = 0;
    }


    // Read characters from input until EOF is encountered
    while ((c = getchar()) != EOF) {
        // Check if character is a digit
        if (c >= '0' && c <= '9') {
            ++ndigit[c - '0'];
        }
        // Check for specific whitespace characters
        else if (c == ' ') {
            ++nblanks;
        }
        else if (c == '\n') {
            ++nnewlines;
        }
        else if (c == '\t') {
            ++ntabs;
        }
        // If not a digit or whitespace, it's classified as "other"
        else {
            ++nother;
        }
    }


    // Print the digit counts
    printf("Digits =");
    for (i = 0; i < 10; ++i) {
        printf(" %d", ndigit[i]);
    }


    // Print the counts
    printf(", Blanks = %d, Tabs = %d, Newlines = %d, Other = %d\n", nblanks, ntabs, nnewlines, nother);


    return 0;
}
