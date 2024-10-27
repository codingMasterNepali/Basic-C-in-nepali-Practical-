// Types of pointers in C programming
// Wild pointer
#include<stdio.h>   
int main(){
        int a=10;
        int *p;
        printf("Value at p: %u\n",&a);
        printf("Address of a: %u\n",p);
        printf(" value: %u\n",*p);

    return 0;
}