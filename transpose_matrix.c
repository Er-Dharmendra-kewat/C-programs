#include <stdio.h>

int main()
{
   int n;

   printf("Enter the N: ");
   scanf("%d",&n);
   int a[n][n];
   int transpose[n][n];
   printf("Enter the elements");
   for (int i = 0; i < n; i++)
   {
    for (int j = 0; j < n; j++)
    {
        scanf("%d",&a[i][j]);

          transpose[j][i] = a[i][j];
    }
    
   }
   for (int i = 0; i < n; i++)
   {
    for (int j = 0; j < n; j++)
    {
       printf("%d ",transpose[i][j]);
    }
    printf("\n");
   }

   
   
    return 0;
}