#include<stdio.h>
struct employee{
    int id;
    char name[20];
    float salary;
};
int main(){
    struct employee s = {101,"Bob",45000}; // declare and initialization
    printf("Employee details:\n");
    printf("ID: %d\n",s.id);
    printf("Name: %s\n",s.name);
    printf("Salary: %f\n",s.salary);
    printf("Size of Data type: %d\n",sizeof(s));
    return 0;
}