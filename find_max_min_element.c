// Online C compiler to run C program online
#include <stdio.h>

int main() {    
    int n;
    printf("enter size of matrix:: ");
    scanf("%d",&n);
   int a[n];
    printf("enter %d matrix:: ",n);
     for(int i=0;i<n;i++){
               scanf("%d",&a[i]);
       
    }
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if(min>a[i]){
            min =a[i];
            
        }
    }
 printf("the smallest element of the matrix is::%d",min);

      
    return 0;
}