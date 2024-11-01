
#include <stdio.h>

#define TABSTOP 8 // Define tab stops every 8 columns

void entab() {
    int c, pos = 0, space_count = 0; // c: current character, pos: current column position, space_count: consecutive spaces count

    // Loop to read each character until the end of input (EOF)
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            // If a space is encountered, increase the space count
            space_count++;
            pos++; // Move cursor to the next column
        } else {
            // If a non-space character is encountered
            if (space_count > 0) {
                // Calculate how many tabs and spaces to insert
                int tabs = (pos - space_count) / TABSTOP;       // Calculate how many full tabs fit
                int spaces = space_count % TABSTOP;             // Remaining spaces after tabs
                
                // Insert tabs
                for (int i = 0; i < tabs; ++i) {
                    putchar('\t');
                }
                
                // Insert spaces
                for (int i = 0; i < spaces; ++i) {
                    putchar(' ');
                }
                
                // Reset space count
                space_count = 0;
            }
            
            putchar(c); // Print the non-space character
            pos++;      // Move cursor position
            
            // If newline is encountered, reset position
            if (c == '\n') {
                pos = 0;
            }
        }
    }
}

int main() {
    entab(); // Call the entab function to process input
    return 0;
}