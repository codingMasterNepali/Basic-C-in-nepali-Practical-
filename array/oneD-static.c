#include<stdio.h>
int main(){

    int a[10]; // array declaration giving only one subscipt [] is known as a 1D array
    a[0]=10;
    a[1]=20;
    a[2]=50;
    a[3]=90;
    a[6]=100;
    a[9]=870;
    printf("%d\n%d\n%d\n%d\n",a[0],a[3],a[5],a[9]);
    // 10, 90,0,870
  

    return 0;
}