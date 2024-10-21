// Function with no arguments and no return type:
#include<stdio.h>
    void add(); ///function declaration
int main(){

              add();  //function call
      
}

void add(){   // function definition

int a,b,c;
printf("Enter the value of a & b\n");
scanf("%d%d",&a,&b);
c=a+b;
printf("The value of a & b is %d",c);



}