#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
int data;
struct node *next;
}node;

void push();
void pop();
void display();

node *start=NULL;
int main()
{
int ch;
do
{
printf("\n \t MAIN MENU \t");
printf("\n 1. Push");
printf("\n 2. Pop");
printf("\n 3. Display");
printf("\n 4. Exit");
printf("\n \n Enter your option :");
scanf("%d",&ch);
switch(ch)
{
    case 1: push();
    break;
    case 2: pop();
    break;
    case 3: display();
    break;
    
}
}while(ch!=4);
return 0;
}

void push()
{
    int val;
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
if(ptr==NULL)
{
    printf("Not able to push an element");
}
else
{
    printf("Enter the value :");
    scanf("%d",&val);
if(start==NULL)
{
    ptr->data=val;
    ptr->next=NULL;
    start=ptr;
}
else
{
    ptr->data=val;
    ptr->next=start;
    start=ptr;
}
    printf("Item pushed");
}
}
void pop ()
{
    int item;
    node *ptr;
if(start==NULL)
{
    printf("Underflow");
}
else
{
    item=start->data;
    ptr=start;
    start=start->next;
    free(ptr);
    printf("Popped value is :%d\n",item);
}
}
void display()
{
    int i;
    node *ptr;
    ptr=start;
if(ptr==NULL)
{
    printf("This Stack is empty");
}
else
{
    printf("    Stack    ");
while(ptr!=NULL)
{
    printf("%d\t",ptr->data);
    ptr=ptr->next;
}
}
}


