

#include <stdio.h>
int main() {
    double nc; // Variable to store the count of characters
    // Use a for loop to read characters until EOF is encountered
    for (nc = 0; getchar() != EOF; ++nc);
         // Loop body is empty; increment count each time a character is read
         
    // Print the total count of characters
    printf("Total Characters: %.0f\n", nc); // Print the count as a whole number

    return 0;
}
