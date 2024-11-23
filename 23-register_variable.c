
#include <stdio.h>
int main() {
    int num;
    register int i , sum=0;  // Declare a register variable
    // Looping through a range of numbers using a register variable
    for (i = 0; i < 10; i++) {
        sum = sum + i;
        printf("sum = %d\n", sum);
    }
    // register int y;
    // printf("%d", y); 
    // register int x = 10;
    // printf("%p", &x); 
    // register int* ptr = &num;  
    // printf("Address of num: %p\n", ptr);
    return 0;
}
