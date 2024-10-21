// Function with no arguments and a return type:
#include<stdio.h>
    int add(); ///function declaration
int main(){

    int sum;
    sum=add();  //function call
    printf("The value of a & b is %d",sum);
      
}

int add(){   // function definition

int a,b,c;
printf("Enter the value of a & b\n");
scanf("%d%d",&a,&b);
c=a+b;
return c;



}