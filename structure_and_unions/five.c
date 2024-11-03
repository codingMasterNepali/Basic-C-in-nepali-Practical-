#include<stdio.h>
union student{
    int sID; // 4 bytes
    char sName[40];  // 40 bytes
    float marks;   // 4 bytes
};
int main(){

    union student s;
    printf("%d",sizeof(s));
    return 0;
}