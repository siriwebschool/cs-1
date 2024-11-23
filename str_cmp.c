#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";
    char str2[] = "helmet";

    // Compare the first 3 characters
    int cmp1 = strncmp(str1, str2, 3);
    if (cmp1 == 0)
        printf("First 3 characters of \"%s\" and \"%s\" are equal.\n", str1, str2);
    else if (cmp1 < 0)
        printf("First 3 characters of \"%s\" are less than \"%s\".\n", str1, str2);
    else
        printf("First 3 characters of \"%s\" are greater than \"%s\".\n", str1, str2);

    // Compare the first 4 characters
    int cmp2 = strncmp(str1, str2, 4);
    if (cmp2 == 0)
        printf("First 4 characters of \"%s\" and \"%s\" are equal.\n", str1, str2);
    else if (cmp2 < 0)
        printf("First 4 characters of \"%s\" are less than \"%s\".\n", str1, str2);
    else
        printf("First 4 characters of \"%s\" are greater than \"%s\".\n", str1, str2);

    return 0;
}


// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str1[] = "hello";
//     char str2[] = "helmet";

//     // Compare the last 3 characters
//     int cmp1 = strncmp(str1 + strlen(str1) - 3, str2 + strlen(str2) - 3, 3);
//     if (cmp1 == 0)
//         printf("Last 3 characters of \"%s\" and \"%s\" are equal.\n", str1, str2);
//     else if (cmp1 < 0)
//         printf("Last 3 characters of \"%s\" are less than \"%s\".\n", str1, str2);
//     else
//         printf("Last 3 characters of \"%s\" are greater than \"%s\".\n", str1, str2);

//     // Compare the last 4 characters
//     int cmp2 = strncmp(str1 + strlen(str1) - 4, str2 + strlen(str2) - 4, 4);
//     if (cmp2 == 0)
//         printf("Last 4 characters of \"%s\" and \"%s\" are equal.\n", str1, str2);
//     else if (cmp2 < 0)
//         printf("Last 4 characters of \"%s\" are less than \"%s\".\n", str1, str2);
//     else
//         printf("Last 4 characters of \"%s\" are greater than \"%s\".\n", str1, str2);

//     return 0;
// }
