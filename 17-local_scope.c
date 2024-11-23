//Local Scope of Variables in C – Nested Blocks example 1

// #include <stdio.h>

// int main() 
// {
//      int my_num = 7; 
//     {
//         //add 10 my_num
//         my_num = my_num + 10;
//         printf("my_num is %d\n",my_num);
//     }
   
//      {
//         //add 10 my_num
//         printf("my_num is %d\n",my_num); //retains value
//     }

//     return 0;
// }




//Local Scope of Variables in C – Nested Blocks example 2
// #include <stdio.h>

// int main() 
// {
//     int my_num = 7;
//     {
//         int new_num = 10; 
//     } 
//     printf("new_num is %d",new_num); //this is line 9
    
//     return 0;
// }

//Line   Message
//9      error: 'new_num' undeclared (first use in this function)


//Local Scope of Variables in C – Different Blocks
#include <stdio.h>

int main()
{
    int my_num = 7;
    printf("%d",my_num);
    my_func();//To access pass as argument
    return 0;
}

void my_func()
{
    printf("%d",my_num);
}
//Line   Message
//13     error: 'my_num' undeclared (first use in this function)
