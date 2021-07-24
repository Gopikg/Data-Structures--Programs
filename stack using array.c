#include<stdio.h>
#include<conio.h>
#define max 5
    int stack[max],top=-1;
    int push();
    int pop();
    int peak();
    int display();
    int main()
    {
    int ch;
    do
{
printf("\n MAIN MENU");
printf("\n 1.Push");
printf("\n 2.Pop");
printf("\n 3.Peak");
printf("\n 4.Display");
printf("\n 5.Exit");
printf("\n Enter your decision :");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
break;
case 2:pop();
break;
case 3:peak();
break;
case 4:display();
break;
}
}
while(ch!=5);
return 0;
}
int push()
{
int n;
printf("Enter the element to push :");
scanf("%d",&n);
if(top==max-1)
{
printf("overflow");
}
else
{
top=top+1;
stack[top]=n;
}
return 0;
}
int pop()
{
int val;
if(top==-1)
{
printf("underflow");
}
else
{
val=stack[top];
top=top-1;
printf("The popped element is :");
}
return 0;
}
int peak()
{
if(top==-1)
printf("Stack is empty");
else
printf("Top element is %d",stack[top]);
return 0;
}
int display()
{
int i;
if(top==-1)
{
printf("Stack is empty");
}
else
{
printf("stack\n");
for(i=0;i<=top;i++)
{
printf("%d\t",stack[i]);
}
}
return 0;
}