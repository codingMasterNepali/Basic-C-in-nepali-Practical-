// Types of pointers in C programming
// Addition and Substraction in pointer 
#include<stdio.h>   
int main(){
        int a=10;
        int *p;
        p=&a;
        printf("%d\n",*p);
        printf("%u\n",p);  //1000
        //p=p+3; // new_size = current_Address/previous_address+ number*sizeOf_dataType [ 1000+3*4=1012]
        p=p-3;
        printf("%u\n",p); // 1000+4=1004 
        
    return 0;
}