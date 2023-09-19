#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,j,pos,num;
    printf("Enter the size of an array");
    scanf("%d",&n);
    int a[n];
    printf("enter the element");
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    printf("The number to be inserted:");
    scanf("%d",&num);
    printf("the position is:");
    scanf("%d",&pos);
    for(i=n;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=num;
    for(i=0;i<=n;i++)
    {
        printf("%d",a[i]);
    }

}
