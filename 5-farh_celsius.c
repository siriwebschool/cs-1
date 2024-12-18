#include <stdio.h>
/* print Fahrenheit−Celsius table
for fahr = 0, 20, ..., 300 */

int convert (int a) {
    return 5 * (a-32) / 9;
}

int main()
{
    int fahr, celsius;
    int lower, upper, step;
    lower = 0; /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    fahr = lower;
    while (fahr <= upper) {
        celsius = convert(fahr);
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}

// using float

float convert (float a) {
    return (5.0/9.0) * (a-32);
}

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    lower = 0; /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    fahr = lower;
    while (fahr <= upper) {
        celsius = convert(fahr);
        printf("%f\t%f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
