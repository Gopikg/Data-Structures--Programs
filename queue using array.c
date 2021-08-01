#include<stdio.h>
#include<conio.h>
#define max 10
    int queue[max],front=-1,rear=-1;
    int insert();
    int delete();
    int display();
    int main()
    {
    int ch;
    do
{
printf("\n MAIN MENU");
printf("\n 1.Insert");
printf("\n 2.Delte");
printf("\n 3.Display");
printf("\n 4.Exit");
printf("\n Enter your decision :");
scanf("%d",&ch);
switch(ch)
{
case 1:insert();
break;
case 2:delete();
break;
case 3:display();
break;
}
}
while(ch!=4);
return 0;
}
int insert()
{
int n;
if(rear==max-1)
{
printf("overflow");
}
else
printf("Enter the element to inserted :"); 
scanf("%d",&n);
{
    if(front==-1 && rear==-1)
    {
    front=0;
    rear=0;
    }
    else 
    {
    rear=rear+1;
    }
queue[rear]=n;
}
return 0;
}
int delete()
{
int val;
if(front==-1|| front>rear)
{
printf("underflow");
}
else
{
val=queue[front];
front=front+1;
printf("The deleted element is :");
}
return 0;
}
int display()
{
int i;
if(front==-1 && rear==-1)
{
printf("queue is empty");
}
else
{
printf("Queue\n");
for(i=front;i<=rear;i++)
{
printf("%d\t",queue[i]);
}
}
return 0;
}