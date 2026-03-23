#include<stdio.h>
int main(){
    int a,b;

    printf("Enter First Number:");
    scanf("%d",&a);
    printf("\nEnter Second Number:");
    scanf("%d",&b);

    if(a>b){
        printf("First Number is Greater: %d",a);
    }
    else{
         printf("Second Number is Greater: %d",b);
    }
}