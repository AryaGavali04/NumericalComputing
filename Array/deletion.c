#include<stdio.h>
int main(){
    int arr[50],pos,value,n;

    printf("How many elements you want in aaray:");
    scanf("%d",&n);

    printf("og arrya: ");
    for(int i=0;i<n;i++){
        scanf(" %d",&arr[i]);
        printf(" %d",arr[i]);
    }

    printf("Enter pos:");
    scanf(" %d",&pos);

  

    for(int i=pos;i<n-1;i++){
        arr[i]= arr[i + 1];

        printf(" %d",arr[i]);
    }
    n--;
printf("varad");
    return 0;
}