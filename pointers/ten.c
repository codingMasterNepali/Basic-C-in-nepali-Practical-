// Types of pointers in C programming
// Void pointer 
#include<stdio.h>   
int main(){
      int i=9;
      int *p;
      float *fp;
      void *ptr;
      p= fp;// incorrect
      fp=&i;// incorrect
      ptr=p; // correct
      ptr=fp; //correct
      ptr= &i; //correct
        
    return 0;
}