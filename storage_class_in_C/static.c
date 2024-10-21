#include<stdio.h>
void fun();
int main(){

    fun();
    fun();
    
    return 0;
    }
void fun(){
    static int i=0;
    i++;
    printf("%d\n",i);

}