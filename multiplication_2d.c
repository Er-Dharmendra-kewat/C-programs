#include <stdio.h>
int main()
{
  int n;
  printf("Enter the size of matrix:: ");
  scanf("%d",&n);
  int a[n][n];
  int b[n][n];
  int c[n][n];
  printf("Enter the first elements of matrix:: ");
  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          scanf("%d",&a[i][j]);
     }
  }
  printf("Enter the second elements of matrix:: ");
  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        scanf("%d",&b[i][j]);
     }
  }
  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
           for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
       
       c[i][j] = a[i][j]*b[i][j];
     }
  }
}
}

 for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
            
            printf("%d ",c[i][j]);
     }
     printf("\n");
  }
    return 0;
}
