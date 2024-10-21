// Function with arguments and a return type:
#include<stdio.h>
    int add(int,int); ///function declaration
int main(){

         int a,b,sum;
         printf("Enter the value of a & b\n");
         scanf("%d%d",&a,&b);   

        sum=add(a,b);  //function calling 
        printf("The value of a & b is %d",sum);


    return 0;
}

int add(int a, int b){   // function definition

int c;
c=a+b;
return c;


}