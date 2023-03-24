#include <stdio.h>
int main()
{
    int a[3][3],b[3][3];
    // Taking input using nested for loop
    printf("Enter elements of 1st matrix\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3;j++)
        {
            scanf("%d", &a[i][j]);
        }
 
    // Taking input using nested for loop
    
    for (int i = 0; i < 3;i++)
        for (int j = 0; j < 3;j++)
        {
            b[i][j]=a[j][i];
        }
 
    
    // Displaying the Tranpose matrix
    printf("Tranpose Of Matrix:\n");
 
    for (int i = 0; i < 3;i++)
    {
        for (int j = 0; j < 3;j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}