// Macro Substitution
#include<stdio.h>
// #define SIZE 5   // macro name is 'SIZE' and value is '5' 
// #define PI 3.1415
// #define AND &&
// #define OR ||

// #define PRINT printf("Happy learning !")
#define AREA(s) (s*s) // macro with argument


int main(){

//    int i=0;
//     for(i=0;i<SIZE;i++){
//         printf("hello\n");
//     }
    // float radius,area;
    // printf("Enter the radius:\n");
    // scanf("%f",&radius);
    // area =PI*radius*radius;
    // printf("Area = %.2f",area);


// Another purpose of macro definition
    // int a=10,b=20,c=50;
    // if(a<15 AND b<=30 OR c>=40 ){
    //     printf("Hello world");
    // }
    // else{
    //     printf("Hi");
    // }

// int a=10;
// if(a<15){
//     PRINT;
// }
// else{
//     printf("Hi");
// }
//  Another purpose of macro defintion is "macro with arguments"
    int s1=10,s2=20,area_of_square;
    area_of_square= AREA(s1);
    printf("Area of square is: %d",area_of_square);
    area_of_square= AREA(s2);
    printf("Area of square is : %d",area_of_square);

    return 0;
}