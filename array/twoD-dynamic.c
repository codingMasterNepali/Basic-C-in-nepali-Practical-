#include<stdio.h>
int main(){
    // dynamic initialization == initialized the arry variable at run time
    
    int a[3][3],i,j; // where i denotes row and j denotes column
    printf("Enter the elements of matrix:\n");
    for(i=0;i<3;i++){   // for loop for row //outer loop 
        for(j=0;j<3;j++){    // inner loop // for loop for column
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\n",a[i][j]);
        }
    }
    
    return 0;
}