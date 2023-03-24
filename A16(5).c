#include <stdio.h>
int main()
{
    int a[3][3],T;
    // Taking input using nested for loop
    printf("Enter elements of 1st matrix\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3;j++)
        {
            scanf("%d", &a[i][j]);
        }
            T=a[0][2]+a[1][1]+a[2][0];
            printf("Trace of the matrix is %d",T);
    return 0;
}