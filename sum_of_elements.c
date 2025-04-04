// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // find the sum of diagonals elements
    
    int n;
    int sum = 0;
    printf("enter size of matrix:: ");
    scanf("%d",&n);
   int a[n][n];
    printf("enter %dx%d matrix:: ",n,n);
     for(int i=0;i<n;i++){
             for(int j=0;j<n;j++){
               scanf("%d",&a[i][j]); 
                sum+=a[i][j];
       }
    }
 printf("the sum of the all element of matrix is::%d",sum);
      
    return 0;
}