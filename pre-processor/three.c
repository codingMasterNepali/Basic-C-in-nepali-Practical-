#include<stdio.h>
#define M 5  // first macro define 
#define N M+1   // second macro define with nested
#define SQUARE(x) ((x)*(x))
#define CUBE(x) SQUARE((x)*(x))
#define SIXTH(x) (CUBE(x)*CUBE(x))
int main(){
int a=2,b=3,c=10,sq,cu,si;
sq=SQUARE(a);
printf("%d\n",sq);
cu=CUBE(b);
printf("%d\n",cu);
si=SIXTH(c);
printf("%d\n",si);
printf("%d\n",N);


    return 0;
}