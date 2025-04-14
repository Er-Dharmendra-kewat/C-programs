#include <stdio.h>

int main()
{

    int n;
    printf("Enter n:: ");
    scanf("%d", &n);
    int a[n][n];
    int flag = 0;
    printf("Enter the matrix:: ");
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
           
            if (i != j && a[i][j] != 0)
            {
                flag++;
                break;
            }
        }

        if(flag==1){
            break;
        }
    }

    if (flag==1)
    {
        printf("Non-diagonal matrix");
    }
    else
    {
        printf("Diagonal matrix");
    }

    return 0;
}