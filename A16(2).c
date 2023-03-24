#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3];
     int k,sum=0;
    // Taking input using nested for loop
    printf("Enter elements of 1st matrix\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3;j++)
        {
            scanf("%d", &a[i][j]);
        }
 
    // Taking input using nested for loop
    printf("Enter elements of 2nd matrix\n");
    for (int i = 0; i < 3;i++)
        for (int j = 0; j < 3;j++)
        {
            scanf("%d", &b[i][j]);
        }
 
    // multiplying corresponding elements of two matrices
    for (int i = 0; i < 3;i++)
        for (int j = 0; j < 3; j++)
        {
            for(k=0;k<3;k++)
            {
                sum=sum+(a[i][k] * b[k][j]);
            }
            c[i][j] = sum;
            sum=0;
        }
 
    // Displaying the product
    printf("Product Of Matrix:\n");
 
    for (int i = 0; i < 3;i++)
    {
        for (int j = 0; j < 3;j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}