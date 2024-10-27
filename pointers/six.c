// Types of pointers in C programming
// Increment & Decrement operators used in pointers
#include<stdio.h>   
int main(){
        int a=10;
        int *p;
        p=&a;
        printf("%d\n",*p);
        printf("%u\n",p);  //1000
        //p=p+1; // new_size= previous_size+ number*sizeOf_dataType
        p=p-1;
        printf("%u\n",p); // 1000+4=1004 
        
    return 0;
}