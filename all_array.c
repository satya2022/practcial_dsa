/*
//GO TO OVERVIEW
#include <stdio.h>

// The goto statement is known as jump statement in C.
// goto is used to transfer the program control to a predefined label.
// Try to avoid it because it as much as possible because it's used to alter-
// -the sequence of normal sequential execution and making a small mistake
// lead to endless iterations.

int main()
{
	int i = 0;
    repeat_from_here:		// the label ( destination )
    	printf("%d ",i++);
    if( i <= 10 )				// Until the condition is satisified
    	goto repeat_from_here;	// the control will jump to the label ( source )
	return 0;
}

*/
/*
//1)PROGAM FOR IMPLEMENTING ONE-DIMENSIONAL ARRAY.
#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[10], n;
repeat_from_here:
    printf("enter totel no of elements\n");
    scanf("%d", &n);
    if (n > 10)
    {
        printf("wrong input size\n");
        goto repeat_from_here;
    }
    else
    {
        printf("enter the %d elements\n", n);
        for (int i = 0; i < n; i++)
        {
            printf("enter array element=");
            scanf("%d", &arr[i]);
            printf("\n");
        }
        for (int i = 0; i < n; i++)
        {
            printf("printing array position no=%d\n", i);
            printf("%d", arr[i]);
            printf("\n");
        }
    }
}
*/
/*
// 2)PROGRAM FOR TRAVERSING AN ARRAY.
#include <stdio.h>
#include <conio.h>
void main(){
    int arr[10],n,i;
    printf("enter total number of elements");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        printf("enter array element of ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++){
        printf("entered array element %d= ",i);
        printf("\n");
        printf("%d", arr[i]);
        printf("\n");
    }

}
*/
// //3.PROGRAM FOR IMPLEMENTING TWO-DIMENSIONAL ARRAY.
#include <stdio.h>
#include <conio.h>
void main() {
    int arr[4][2],i,j;
    for(i=0;i<4;i++){
        for ( j = 0; j < 2; j++)
        {
          printf("2d array element at position %d%d",i,j);
          scanf("%d",&arr[i][j]);
        }
          printf("printing 2d array element");
    }
    for(i=0;i<4;i++){
        for ( j = 0; j < 2; j++)
        {
          printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}