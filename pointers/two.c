#include<stdio.h>   
int main(){

    int var =20;// actual variable declaration/ initialization
    int* p;
    p=&var;
    printf("Address of var variable : %x\n",&var);
    printf("Address of var variable : %x\n",p);
    printf("Value of *p variable: %d\n",*p);
   
    return 0;
}