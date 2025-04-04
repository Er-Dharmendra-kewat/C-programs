// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    // find the sum of diagonals elements

    int rows, cols;
    int sum = 0;
    printf("enter size of matrix:: ");
    scanf("%d%d", &rows, &cols);
    int a[rows][cols];
    printf("enter %d by %d matrix:: ", rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
            if (i == j)
            {
                sum += a[i][j];
            }
        }
    }

    printf("the sum of diagonals is::%d", sum);

    return 0;
}