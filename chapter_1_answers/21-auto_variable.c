#include <stdio.h>
int main(){
    auto int var= 34;// Scope local to main 
    // gets destroyed-saves m/y; gives garbage value without initialisation

    printf("%d",var);
    return 0;

}
int func(){
    printf("%d",var);// Trying to access var outside main
}


