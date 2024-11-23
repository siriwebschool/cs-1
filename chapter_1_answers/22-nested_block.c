// #include <stdio.h>
// int main(){
//     int var = 3;
//     int var = 4;
//     printf("%d\n",var);
//     printf("%d\n",var);//not allowed- redefinition:error
//     return 0;

// }


#include <stdio.h>
int main(){
    int var = 3;
    {
        int var = 4;
        printf("%d\n",var);
    
    }
    printf("%d\n",var);
    return 0;

}


// {

//     ...{
        
//     }
    
// }



// {

// }

// {

// }