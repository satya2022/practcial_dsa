#include<stdio.h>
#include<conio.h>
void main() {
    int arr[100],i,iteam,n,k=0;
    printf("enter how many elements you want \n");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
      printf("ener array elements");
      scanf("%d",&arr[i]);
    }
    printf("printing array elements\n");
    printf("\n");
    for ( i = 0; i < n; i++)
    {
      printf("%d",arr[i]);
    }
    printf("enter which elementyou want to search\n");
    scanf("%d",&iteam);
   while (k<n-1)
   {
    if (arr[k]==iteam)
    {
        printf("item is fond position is=%d",k);
        break;
    }
     k++;
     if (k>n-1)
     {
       printf("item is not found\n");
     }
     
    
   }
   
     
    }
    
