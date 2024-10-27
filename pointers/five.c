// Pointer and Strings
#include<stdio.h>   
int main(){
   
    char str[6]="Hello";
    char *ptr;
    int i;
    ptr=str;
    for(i=i;i<6;i++){
        printf("%s\n",*ptr);
        ptr++;
        
    }


    return 0;
}