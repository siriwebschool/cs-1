#include <stdio.h>

#define TABSTOP 8 // Define tab stops every 8 columns

void detab() {
    int c, pos = 0; // c stores the input character, pos tracks the current column position
    
    // Loop to read each character until the end of the input (EOF)
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            // If a tab is encountered, calculate how many spaces are needed
            int spaces = TABSTOP - (pos % TABSTOP); // Spaces needed to reach next tab stop
            for (int i = 0; i < spaces; ++i) {
                putchar(' '); // Print the required number of spaces
                pos++;        // Move the cursor position accordingly
            }
        } else {
            putchar(c); // For non-tab characters, print them as is
            pos++;      // Move the cursor position
            
            // If a newline is encountered, reset the position counter
            if (c == '\n')
                pos = 0;
        }
    }
}

int main() {
    detab(); // Call the detab function to process input
    return 0;
}