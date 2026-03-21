#include<stdio.h>
int main(){
    int a=5,b=7;

     printf("Before Swapping:\n a = %d \n b = %d ",a,b);

    printf("\nAfter Swapping:\n");

    // a=b;
    // b=a;

    a = a + b; //a=12 
    b = a - b;  //b = 12-7 = 5
    a = a - b;  //a = 12-5 = 7  that how you swap
    printf(" a = %d\n b = %d ",a,b);

   return 0;
}