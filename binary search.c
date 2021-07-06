#include<stdio.h>
#include<conio.h>
void main()
{
    int a[50],i,val,n,beg,end,pos,mid;
    printf("Enter the limit of the array");
    scanf("%d",&n);
    printf("enter the elements of the aaray");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        }
    printf("enter the element to be searched :");
    scanf("%d",&val);
    beg=1;
    end=n;
    pos=-1;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(a[mid]==val)
        {
        pos=mid;
        printf("%d found at position %d",val,pos);
        break;
        }
        else
{
if(a[mid]>val)
end=mid-1;
else
beg=mid+1;
}
}
if(pos==-1)
printf("value is not found");
getch();
}
