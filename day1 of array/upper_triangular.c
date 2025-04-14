#include <stdio.h>

int main()
{
    int n;

    printf("Enter the N: ");
    scanf("%d", &n);
    int a[n][n];
    int flag = 0;
    printf("Enter the elements");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i>j && a[i][j] != 0)
            {
                flag = 1;
                break;
            }
        }
    
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    if (flag==1)            
            printf("\nNot Upper Triangular matrix");
    else
    printf("\nUpper Triangular matrix");
    
    return 0;
}