#include<stdio.h>
int main(){

    int i;
    char c;
    float f;
    double d;

    printf("The size of int is %d\n",sizeof(i)*8);
    printf("The size of char is  %d\n",sizeof(c)*8);
    printf("The size of float is %d\n",sizeof(f)*8);
    printf("The size of double is %d\n",sizeof(d)*8);

    return 0;
}