#include<stdio.h>
int main(){
    int array[10];
   int  arr[]={11,12,13,14,15,16,17,18,19,20};
//    for (int i=0;i<10;i++){   //Traversal (Accessing Elements) means printing ele
//    printf(" %d",arr[i]);
//    }

   for (int j=0;j<10;j++){
    array[j]=j+21;
    printf(" %d",array[j]);

   }
//    for(int j=0;j<10;j++){
    // printf(" %d",array[j]);
//    }
   return 0;
}