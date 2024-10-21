#include<stdio.h>
int main(){

   register int a=5;
   int b;
   b=a++;
   a--;
   b=a+7;
   printf("%d",b);

    return 0;

}