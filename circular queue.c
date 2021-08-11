#include<stdio.h>
#include<conio.h>
#define max 10
int queue[max];
int front=-1, rear=-1;
void insert(void);
int delete(void);
void display(void);
int main()
{
int option, val;
clrscr();
do
{
printf("\n MAIN MENU");
printf("\n 1. Insert an element");
printf("\n 2. Delete an element");
printf("\n 3. Display");
printf("\n 4. EXIT");
printf("\n Enter your option :");
scanf("%d",&option);
switch(option)
{
case 1: 
insert();
break;
case 2: 
val=delete();
if(val!=-1)
printf("\n The number delted is :");
break;
case 3:
display();
break;
}
}
while(option!= 4);
getch();
return 0;
}
void insert()
{
int n;
printf("\n Enter the number to be inserted :");
scanf("%d",&n);
if(front==0 && rear==max-1)
printf("\n OVERFLOW");
else if(front==-1 && rear==-1)
{
front=rear=0;
queue[rear]=n;
}
else
{
rear++;
queue[rear]=n;
}
}
int delete()
{
int val;
if(front==-1 && rear==-1)
{
printf("\n UNDERFLOW");
return -1;
}
val=queue[front];
if(front==rear)
front=rear=-1;
else
{
if(front=max-1)
front=0;
else
front++;
}
return val;
}
void display()
{
int i;
printf("\n");
if(front==-1 && rear==-1)
printf("\n Queue is empty");
else
{
if(front<rear)
{
for(i=front;i<=rear;i++)
printf("\t%d",queue[i]);
}
else
{
for(i=front;i<max;i++)
printf("\t%d",queue[i]);
for(i=0;i<=rear;i++)
printf("\t%d",queue[i]);
}
}
}



 