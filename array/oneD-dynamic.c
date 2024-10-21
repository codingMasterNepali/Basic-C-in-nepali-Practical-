#include<stdio.h>
int main(){
    // dynamic initialization == initialized the arry variable at run time
    
    int arr[5];
    // accepting values in an array
    for(int i=0;i<5;i++){
        scanf("%d\n",&arr[i]);
    }
    //displaying these elements 
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}