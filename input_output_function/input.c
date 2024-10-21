#include<stdio.h>
#include<string.h>
int main(){
// char a;
// a=getchar();   ///////input funtion 'getchar'
// if(a=='a'){

//     printf("You are a good boy");
// }

// int a;
// scanf("%d",&a);    //input function scanf()
// printf("The value of a is %d",a);
char a [20];
printf("Enter your name:");
gets(a);
//puts(a);
printf("Your name is %s\n",a);

 

    return 0;
}