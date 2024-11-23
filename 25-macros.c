#include <stdio.h>
#define PI 3.141592
#define AREA(x) (3.14*x*x)
int main()
{
printf("Date %s\n", __DATE__);     // MM-DD-YYY
printf("Time %s\n", __TIME__);      // HH:MM:SS
printf("File %s\n", __FILE__);   //  
printf("Line %d\n", __LINE__); 
printf("ANSI %d\n", __STDC__);
printf("Area %f\n", AREA(2));

return 0;
}