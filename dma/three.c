// Allocating memory with 'realloc' function
//syntax: realloc (ptr,new_size);

#include<stdio.h> 
#include<stdlib.h>  
int main(){
int *ptr,i;

    // allocating memory for only 1 integer
    ptr=malloc(sizeof(int));
    ptr[0]=1;
    // realloc memory size of to store 3 integers
    ptr= realloc(ptr,3*sizeof(int));
    ptr= realloc(ptr,2*sizeof(int));
    ptr[1]=2;
    ptr[2]=3;
    // printing values
    for(i=0;i<3;i++){
        printf("%d\n",ptr[i]);
    }

    return 0;
}