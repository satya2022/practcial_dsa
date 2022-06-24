#include <stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;
void enqueue();
void disable();


void enqueue(int x){
  if (rear==N-1)
  {
  printf("queue is full");
  }
  else if (front== -1&&rear==-1){
    front = rear=0;
    queue[rear]=x;
  }
  else
  {
    rear++;
    queue[rear]=x;

  }
}
void disable(){
  int i;
   if (front== -1&&rear==-1){
     printf("queue is empty\n");
   }
   else
   {
    for ( i = front; i < rear+1; i++)
    {
 printf("%d",queue[i]);
    }
    
   }
   

}

void main()
{
  enqueue(3);
  enqueue(5);
  enqueue(7);
  disable();
}
  

