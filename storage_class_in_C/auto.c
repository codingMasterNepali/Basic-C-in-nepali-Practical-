#include<stdio.h>
int main(){

    auto int a=10;
    printf("%d\n",a);
    {
        int a=6;
        printf("%d\n",a);
    }


    return 0;

}