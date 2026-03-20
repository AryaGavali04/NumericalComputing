// This program prints a pattern of '#' characters based on user input. The pattern is a right-aligned triangle where the number of '#' characters decreases with each subsequent line.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number of rows: \n");
    scanf("%d",&n);

for(int i = 0; i < n; i++){
    for(int j = 0; j <= i; j++){
        printf(" ");
    }
    for(int j = 0; j < n - i; j++){
        printf("#");
    }
    printf("\n");
}
    return 0;
}