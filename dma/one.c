// Allocating memory with 'malloc' function
#include<stdio.h> 
#include<stdlib.h>  
int main(){
int *ptr;
int n,i;

//   Get the number of element from the user
printf("Enter number of elments:");
scanf("%d",&n);
// Dynamically allocate memory using malloc()
ptr =(int*)malloc(n* sizeof(int));   // only one argument default value is garbage
if(ptr==NULL){
    printf("Heap is full\n");
    exit(0);
}
else{
    // Memory has been successfully allocated
    printf("Memory successfully allocated using malloc\n");
}
for(i=0;i<n;i++){
    scanf("%d",(ptr+i));
}
printf("The elements are: \n");
for(i=0;i<n;i++){
    printf("%d\n",*(ptr+i));
}



    return 0;
}