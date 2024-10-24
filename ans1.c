#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    int lower = 0;    // Lower limit of temperature table
    int upper = 100;  // Upper limit of temperature table
    int step = 10;    // Step size

    printf("Celsius to Fahrenheit Conversion Table\n");
 
    
    celsius = lower;
    while (celsius <= upper) {
        fahrenheit = (celsius * 9.0 / 5.0) + 32;  // Conversion formula
        printf("%6.1f °C  =  %6.1f °F\n", celsius, fahrenheit);
        celsius = celsius + step;
    }

    return 0;
}