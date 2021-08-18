#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
 int data;
 struct node *next;
}node;

node *create(int);
node *insertbeg(node *start);
node *insertend(node *start);
node *insertbefore(node *start);
node *insertafter(node *start);
node *deletebeg(node *start);
node *deleteend(node *start);
node *deletenode(node *start);
void display(node *start);



int main(){
 int n,ch;
 node *start=NULL;
 do
{
printf("\n Main Menu");
printf("\n 1. Create a list");
printf("\n 2. Display the list");
printf("\n 3. Add a node at the beginning");
printf("\n 4. Add a node at the end");
printf("\n 5.Add a node before a given node");
printf("\n 6. Add a node after a given node");
printf("\n 7. Delete a node from the beginning");
printf("\n 8. Delete a node from the end");
printf("\n 9. Delete a given node ");
printf("\n 10. Exit");
printf("\n\n Enter your option :") ;
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("How many nodes:");
 scanf("%d",&n);
start=create(n);
break;
case 2:
display(start);
break;
case 3:
start=insertbeg(start);
case 4:
start=insertend(start);
break;
case 5:
start=insertbefore(start);
break;
case 6:
start=insertafter(start);
break;
case 7:
start=deletebeg(start);
break;
case 8:
start=deleteend(start);
break;
case 9:
start=deletenode(start);
break;
}
}

while(ch!=10);
   return 0;
}

node *create(int n)
{
 int i;
node *start=NULL;
 node *newnode=NULL;
 node *ptr=NULL;
for(i=0;i<n;i++)
 {
  newnode=(node *)malloc(sizeof(node));
  printf("Enter the data no. %d :",i+1);
  scanf("%d",&newnode->data);
  newnode->next!=NULL;

 if(start==NULL)
{
  start=newnode;
}
  else
 {
      ptr=start;
    while(ptr->next!=NULL)
    {
    ptr=ptr->next;
    }
     ptr->next=newnode;
   } 
}
return start;
}

void display(node *start)
{
 node *ptr=start;

 while(ptr!=NULL)
    {
    printf("\t%d",ptr->data);
    ptr=ptr->next;
    }
    
    
   
   return start;
}
node *insertbeg(node *start)
{
 node *newnode;
int val;
printf("Enter the data :");
scanf("%d",&val);
newnode=(node *)malloc(sizeof(node));
newnode->data=val;
newnode->next=start;
start=newnode;
return start;
}
node *insertend(node *start)
{
node *newnode;
node *ptr;
node *preptr;
int item;
printf("Enter the data :");
scanf("%d",&item);

newnode=(node *)malloc(sizeof(node));
newnode->data=item;
ptr=start;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=newnode;
return start;
}

node *insertbefore(node *start)
{
node *newnode;
node *ptr;
node *preptr;
int item ;
int val;
printf("Enter the data :");
scanf("%d",&item);

printf("Enter the value before which node has to be inserted :");
scanf("%d",&val);

newnode=(node *)malloc(sizeof(node));
newnode->data=item;
ptr=start;
preptr=ptr;

while(ptr->data!=val)
{
preptr=ptr;
ptr=ptr->next;
}

preptr->next=newnode;
newnode->next=ptr;

return start;
}

node *insertafter(node *start)
{

node *newnode;
node *ptr;
node *preptr;
int item,val;
printf("Enter the data :");
scanf("%d",&item);
printf("Enter the value after which node has to be inserted :");
scanf("%d",&val);

newnode=(node *)malloc(sizeof(node));
newnode->data=item;
ptr=start;
preptr=ptr;

while(preptr->data!=val)
{
preptr=ptr;
ptr=ptr->next;
}

preptr->next=newnode;
newnode->next=ptr;

return start;
}
node *deletebeg(node *start)
{
node *ptr;
ptr=start;
start=start->next;
free(ptr);
return start;
}
node *deleteend(node *start)
{
node *ptr;
node *preptr;
ptr=start;

while(ptr->next!=NULL)
{
preptr=ptr;
ptr=ptr->next;

}
preptr->next=NULL;
free(ptr);

return start;

}
node *deletenode(node *start)
{

node *ptr;
node *preptr;
node *temp;
int val;
printf("Enter the value after which node has to be deleted :");
scanf("%d",&val);
ptr=start;
preptr=ptr;
while(preptr->data!=val)
{
preptr=ptr;
ptr=ptr->next;
}
temp=ptr;
preptr->next=ptr->next;
free(temp);

return start;
}