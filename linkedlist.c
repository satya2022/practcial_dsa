#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 struct node
    {
        int data;
        struct node *next;
    };
    struct node *head=NULL;

void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();

void main(){
int choice ;
while(1){
    printf("\n\nEnter your choice:\n");
 printf("1.Create     \n");
 printf("2.Display    \n");
 printf("3.Insert at the beginning    \n");
 printf("4.Insert at the end  \n");
 printf("5.Insert at specified position       \n");
 printf("6.Delete from beginning     \n");
 printf("7.Delete from the end       \n");
 printf("8.Delete from specified position     \n");
 printf("9.For Searching\n");
 printf("10.Exit       \n");
 scanf("%d",&choice);
switch (choice)
{
case 1:
   create();
    break;
case 2:
   display();
    break;
case 3:
   insert_begin();
    break;
case 4:
   insert_end();
    break;
case 5:
   insert_pos();
    break;

default:
   printf("\n Wrong Choice:\n"); 
    break;
}
}

}

void create()
{
    struct node *temp, *newnode;
    int want = 1;
    head = NULL;
    while (want != 0)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter data value=");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("enter 1 if you want to continue otherwise enter 0\n");
        scanf("%d", &want);
    }


}
void insert_begin(){
    struct node *newnode;
    newnode =(struct node*)malloc(sizeof(struct node));
    printf("enter newnode data\n");
   scanf("%d", &newnode->data);
   newnode->next = head;
   head = newnode;
}


void insert_end(){
    struct node *newnode,*temp;
    newnode= (struct node *)malloc(sizeof(struct node));
    printf("enter data what you want insert at end");
    scanf("%d", &newnode->data);
    newnode->next=NULL;
    temp=head;
    while (temp->next != NULL)
    {
     temp = temp->next;
    }
    temp->next=newnode;
}

void display(){
    struct node*temp;
     temp = head;
    while (temp->next != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}


void insert_pos(){
    
}


