#include<stdio.h>   
int main(){

        int a=10;
        int *p;
        p=&a;
        int **pp;
        pp=&p;
        printf("Value at p:%d\n",*p);
        printf("Address of *p: %u\n",p);
        printf("address of **pp: %u\n",pp);

    return 0;
}