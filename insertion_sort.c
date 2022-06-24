#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[100];
    int i, j, n, k, m, temp;
    printf("enter how many elements you want");
    scanf("%d", &n);
    for (k = 0; k < n; k++)
    {
        printf("ener array elements");
        scanf("%d", &arr[k]);
    }
    printf("printing enterd elements in array");
    printf("\n");
    for (k = 0; k < n; k++)
    {
        printf("%d", arr[k]);
    }

    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }

    // printing sorted array
    printf("\nThe sortd array is :\n");
    for (m = 0; m <n; ++m)
    {
        printf(" %d\n", arr[m]);
    }
}