#include<stdio.h>
#include<string.h>
int main(){
   
   char str1[]="Kathmandu";
   char str2[]="Butwal";

   strcpy(str1,str2);
   printf("String str1 is = %s",str1);

   return 0;
}