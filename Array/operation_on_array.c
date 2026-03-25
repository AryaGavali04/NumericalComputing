#include<stdio.h>
int main(){
    int arr[100],pos,n,value;

    printf("Enter number of element: ");
    scanf("%d",&n);

    printf("Enter element of array: ");

    for(int i=0;i<n;i++){
        scanf(" %d",&arr[i]);       
    }
        printf("Elements are :");
     for(int i=0;i<n;i++){
        // printf("Elements are :");won't work here
         printf(" %d",arr[i] );
    }

   printf("\nEnter position (0-based index): ");
    scanf("%d", &pos);

    printf("\nEnter value:");
    scanf("%d",&value);


    for(int i=n-1;i>=pos;i--){  //shifting array to right
        arr[i + 1]=arr[i];
    }
        arr[pos] = value;
        n++;

    // arr[0] = 44;
    // n++;

    //print updated array
    printf("Updated array :\n");

    for(int i=0;i<n;i++){
        printf(" %d",arr[i]);
    }

    return 0;
}