// Function with arguments and no return type:
#include<stdio.h>
    void add(int,int); ///function declaration
int main(){

         int a,b,sum;
         printf("Enter the value of a & b\n");
         scanf("%d%d",&a,&b);   

        add(a,b);  //function call
      
}

void add(int a, int b){   // function definition

int c;
c=a+b;
printf("The value of a & b is %d",c);



}