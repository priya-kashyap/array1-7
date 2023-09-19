#include <stdio.h>
#include<math.h>
void main()
{
    int n,i,j;
    printf("Enter the size of an array");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the elements are:");
    for(j=0;j<n;j++)
    {
        printf("%d",a[j]);
    }
}
