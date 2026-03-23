#include<stdio.h>
int main(){
    int a,b;

    printf("Enter First Number:");
    scanf("%d",&a);
    // printf("\nEnter Second Number:");
    // scanf("%d",&b);

    if(a%2== 0){
        printf("%d is Even");
    }
    else {
         printf("%d is Odd");
    }
    return 0;
}