#include<stdio.h>
int smallest(int a[], int k,int n);
int sort(int a[],int n);
int main()
{
    int a[15],i,n;
    printf("Enter the number of elements in the array");
    scanf("%d",&n);
    printf("enter the elements of the array");
    for(i=1;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
    printf("the sorted array");
    for(i=1;i<=n-1;i++)
    {
        printf("%d\t",a[i]);
        }
        }
    int smallest(int a[],int k,int n)
    {
    int small,j,pos;
    small=a[k];
    pos=k;
    for(j=k+1;j<=n-1;j++)
    {
    if(small>a[j])
    {
    small=a[j];
    pos=j;
    }
    }
    return pos;
    }
    int sort(int a[], int n)
    {
    int k,pos,temp;
    for(k=1;k<=n-1;k++)
    {
    pos=smallest(a,k,n);
    temp=a[k];
    a[k]=a[pos];
    a[pos]=temp;
    }
    return 0;
    }
    
    
    
    
    