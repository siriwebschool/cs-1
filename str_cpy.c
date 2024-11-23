#include <stdio.h>
#include <string.h>

int main() {
    // Initialize source string
    char src[] = "Hello, World!";
    
    // Create destination arrays with different sizes
    char dest1[20];  // Large enough to hold the string
    char dest2[10];  // Smaller than the string size

    // Demonstrate strcpy (unsafe, no bounds checking)
    strcpy(dest1, src);
    printf("After strcpy:\n");
    printf("dest1: %s\n\n", dest1);

    // Now let's use strncpy (safe, but may not null-terminate if src is larger than n)
    strncpy(dest2, src, 9);  // Only copy first 9 characters
    dest2[9] = '\0';  // Manually ensure null termination
    printf("After strncpy (with safe bounds):\n");
    printf("dest2 (first 9 characters): %s\n\n", dest2);

    // Example where strncpy might not null-terminate if not handled correctly
    char dest3[5];
    strncpy(dest3, src, 4);  // Only copy first 4 characters, no space for null terminator
    dest3[4] = '\0';  // Manually add null terminator
    printf("After strncpy (potential no null-termination):\n");
    printf("dest3 (first 4 characters): %s\n", dest3);
    
    return 0;
}
