#include <stdio.h>
int main()
{
    int a[3][3],sum=0;
    // Taking input using nested for loop
    printf("Enter elements of 1st matrix\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3;j++)
        {
            scanf("%d", &a[i][j]);
        }
        
            for (int i = 0; i < 3;i++)
            {
               for (int j = 0; j < 3; j++)
                {
                   sum=sum+a[i][j];
                }
              printf("\nthe sum of %d row is= %d",i,sum);
              sum=0;
            }
        sum=0;
            
        
        for (int i = 0; i < 3;i++)
          {
            for (int j = 0; j < 3; j++)
               { 
                sum=sum+a[j][i];
               }
               printf("\n the sum of %d column is= %d",i,sum);
              sum=0;
          }
        sum=0;
        printf("\n");
    return 0;
}