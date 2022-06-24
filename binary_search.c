#include<stdio.h>
#include<conio.h>
void main() {
    int arr[100],i,n,lr=0,f=0,mid,item;
    printf("enter how many elements you want in array ");
    scanf("%d",&n);
    int up=n-1;
    for(i=0;i<n;i++){
        printf("enter array element");
        scanf("%d",&arr[i]);
    }
    printf("printing enterd array elements ");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("enter which elements you want to search");
    scanf("%d",&item);
    while(lr<=up){
        mid=(lr+up)/2;
        if (arr[mid]==item)
        {
          f=1;
          break;
        }
        if (arr[mid]<item)
        {
            lr=mid+1;
        }
        else{
            up=mid-1;
        }
    }

    if (f==1)
    {
        printf("element searched position is=%d",mid);
    }
    else{
        printf("element not fond");
    }
    
}