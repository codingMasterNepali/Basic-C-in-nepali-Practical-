#include<stdio.h>   
int main(){

    int a = 10;
    int *p;
    p=&a;
    printf("%d\n",*p); // it print 10
    printf("%u\n",p); // it print address of variable a
    return 0;
}