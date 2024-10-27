// Types of pointers in C programming
// NULL pointer 
#include<stdio.h>   
int main(){
       int *p, *q;
       int *a=NULL, *b=NULL;
       if(p==q){
        printf("This will be printed if p and q are same by chance");
       }
       if(a==b){
        printf("This will be printed always because a and b are same");
       }
        
    return 0;
}