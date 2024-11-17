#include<stdio.h>
#define X 10
int main(){

    #ifdef X
    printf("Hello");

    #else
    printf("Hi");

    #endif
    
    return 0;
}