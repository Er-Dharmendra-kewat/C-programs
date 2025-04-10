#include <stdio.h>

int main() {
    
    int n;
    printf("Enter square matrix size:: ");
    scanf("%d",&n);
    int a[n][n];
    int sum = 0;
    printf("Now enter the elements %dx%d of matrix::",n,n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);

            if (i+j==n-1){
                sum+=a[i][j];
            }
           
            
        }
    }printf("The sum 2nd diagonla elementis: %d",sum);
    
    return 0;
}