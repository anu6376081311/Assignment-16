#include<stdio.h>
#include<stdlib.h>
int main(){
   int row,col,i,j,a[10][10],max = 0,sum=0,index=0;
   printf("Enter row");
   scanf("%d",&row);
   printf("Enter Column");
   scanf("%d",&col);
   printf("Enter Element of Matrix");
   for(i = 0; i < row; i++){
      for(j = 0; j < col; j++){
         scanf("%d",&a[i][j]);
      }
   }
   printf("Elements are:\n");
   for(i = 0; i < row; i++){
      for(j = 0; j < col; j++){
         printf("%d\t",a[i][j]);
      }
      printf("\n");
   }
   /*checking maximum number  of 1s*/
   for(int i=0; i<4; i++){

     for(int j=0; j<4; j++){ 
         if(a[i][j]==1) 
            sum=a[i][j]+sum; 
         
     } 
     if(sum>max)
     {
        max = sum;
        index = i;
     }
   }

   printf("Index of row with maximum 1s is %d", index);

   return 0;
}