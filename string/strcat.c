#include<stdio.h>
#include<string.h>
int main(){
   
   char str1[100]="Welcome to codingMaster Nepali";
   char str2[100]=" YouTube Channel";

   strcat(str1,str2);
   puts(str1);
   puts(str2);

   return 0;
}