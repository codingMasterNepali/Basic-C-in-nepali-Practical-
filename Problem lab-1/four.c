#include<stdio.h>
int main(){

   int a=5;
   int b=8;

   printf("Original Values\n");
   printf("The value of a is %d and b is %d",a,b);


   printf("\nSwapped Values");
   int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nThe swapped values of a is %d and b is %d",a,b);     



    return 0;
}