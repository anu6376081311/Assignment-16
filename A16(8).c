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
                   if(i<j)
                   a[i][j]=0;
                }
              
            }
        printf("Upper tringular  Matrix:\n");
 
    for (int i = 0; i < 3;i++)
    {
        for (int j = 0; j < 3;j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}