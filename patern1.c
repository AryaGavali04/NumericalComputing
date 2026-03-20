#include<stdio.h>
int main(){
    // int i,j;

    // for(i=1;i<=5;i++){
    //     for(j=1;j<=i;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // return 0;
int n;
printf("Enter the number of rows: ");
scanf("%d", &n);

for(int i=0;i<n;i++){
    for(int J=0;J<=i;J++){
        printf("#");
    }
    printf("\n");
}
return 0;
}