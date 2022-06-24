#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100];
    int i, j, k,m;
    int n;
    printf("enter how many element you want in array ");
    scanf("%d", &n);
    for (int k = 0; k < n; k++)
    {
        printf("enter element at index %d ", k);
        scanf("%d", &a[k]);
    }
    printf("you enerd array is= ");
    printf("\n");
    for (int k = 0; k < n; k++)
    {
        printf("%d", a[k]);
    }

//interchange array elements
    for (i = 0; i < n - 1; i++)
    {
        int min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }
    //display the sorted array
printf("\n Sorted array is :\n");
for(m=0;m<n;m++){
printf(" %d\n",a[m]);
}
}