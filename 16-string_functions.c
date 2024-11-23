//STRING FUNCTIONS -COPY, CONCATENATE, LENGTH 

#include <stdio.h>
#include <string.h>

int main() {
    // Step 1: Initialize strings
    char str1[20] = "Hello";  // First string
    char str2[20] = "World";  // Second string

    // Step 2: Print the original strings
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    // Step 3: Copy str1 to str3
    char str3[20];  // Declare a new string for copying
    strcpy(str3, str1);  // Copy content of str1 to str3
    printf("str3 after copying str1: %s\n", str3);  

    // Step 4: Concatenate str1 and str2
    strcat(str1, ", ");  
    strcat(str1, str2);  // Concatenate str2 to str1
    printf("Concatenated string: %s\n", str1);  

    // Step 5: Print the length of str1
    printf("Length of str1: %zu\n", strlen(str1));  

    return 0; 
}
//['H', 'e', 'l', 'l', 'o', '\0', ...]  // The rest are unused spaces in the array