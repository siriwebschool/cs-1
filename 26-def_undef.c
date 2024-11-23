
#include <stdio.h>
#define MAX(a, b) \
                    if ((a) > (b)) \
                        printf("%d is maximum\n", (a)); \
                    else \
                        printf("%d is maximum\n", (b));

int main()
{
    MAX(3, 4);    // Correct usage of MAX macro
    
    #undef MAX    // This removes the MAX definition

    // Uncommenting the line below will now cause an error because MAX is undefined
    // MAX(5, 4);

    return 0;
}








// #include <stdio.h>
// #define MUL(a,b) a*b
// int main()
// {
    
//     printf("multiplication is %d",MUL(5+2,7+4));
//     return 0;
// }


// #include <stdio.h>
// #define A 10
// int main()
// {
//     int x=A;
//     printf("%d",x);
//     return 0;
// }