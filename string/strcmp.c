#include<stdio.h>
#include<string.h>
int main(){
   
   char str1[]="codingMaster Nepali";
   char str2[]="Youtube Channel";

    int res=strcmp(str1,str2);

    if(res==0){
        printf("String is equal");
    }
    else{
        printf("String are unequal");
    }


   return 0;
}