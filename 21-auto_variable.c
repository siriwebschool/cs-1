#include <stdio.h>
int z;
int main(){
    int x = 10; //Scope local to main
    {
        auto int y;
        printf("The value of y is %d\n",y); // if not initialised gives garbage value  
    }
    
    printf("x=%d",x);
    printf("z=%d",z);
    return 0;
}


// int func(){
//     printf("%d",var);// Trying to access var outside main
// }


// {

//     ...{
       
//     }
    
// }



// {

// }

// {

// }