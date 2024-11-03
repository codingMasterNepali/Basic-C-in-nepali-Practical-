#include<stdio.h>
struct student{    // structure define
    int roll_no;
    char name[30];
    float marks;
};
void print_student(int roll_no,char name[],float marks); // function declaration
int main(){
    struct student s={101,"KD",88}; // declaration and initialization

    print_student(s.roll_no,s.name,s.marks);  // function call    
       return 0;
}
void print_student(int roll_no,char name[],float marks){  // function definition 

            printf("Roll Number: %d\n",roll_no);
            printf("Name: %s\n",name);
            printf("Marks: %0.2f",marks);


}