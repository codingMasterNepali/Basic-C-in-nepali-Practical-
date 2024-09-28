#include<stdio.h>
int main(){

        //There are three logical operator in c 
        // 1. Logical 'AND' operator &&  -- means multiplication
        // 2. Logical 'OR' operaror ||    -- means sum
        // 3. Logical 'NOT' operator !     -- multiplication
 
        int a=30,b=10,c=100; // variable declaration and initialization
        
        if(a>b != a>c){  // true means 1 that's why 1 * 1 =1(true)
            printf("a is greater than b and c");
        }
        else{
            printf("a is not greater than b and c");
        }
        

    return 0;
}