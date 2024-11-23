#include <stdio.h>
static char ch;//file scope
void display();
void main()
{
    display();
    display();
    // printf("\n x= %d",x);
}
void display(){
    static int x;
    int y=10;
    x +=10;
    y++;
    printf("\n x= %d",x);
    printf("\n y= %d",y);
    //  printf("\n y= %d",ch);
}