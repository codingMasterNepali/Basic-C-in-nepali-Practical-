#include<stdio.h>
int sum(int []);    // function declaration 
int main(){

    int a[4]={1,3,5,6};
    printf("The sum of given arrays: %d",sum(a));  //function call
    return 0;
}
int sum(int a[]){           // function definition
    int sum=0;
    for(int i=0;i<4;i++){
        sum =sum+a[i];
    }
    return sum;
}