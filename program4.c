#include <stdio.h>
#include<math.h>
void main()
{
    int n,i,j,pos,num;
    printf("Enter the size of an array");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements");
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
    }
    printf("The number to be deleted:");
    scanf("%d",&num);
    for(i=0;i<n;i++){

       if (a[i]==num){
           pos=i;
           for(i=pos;i<n;i++){
                a[i]=a[i+1];
            }
       }
    }
         for(i=0;i<n-1;i++){
        printf("%d",a[i]);
    }
}

