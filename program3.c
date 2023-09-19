
#include <stdio.h>
#include <math.h>

void main()
{
    int n, i, j, pos, num;
    printf("Enter the size:");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    /* printf("the elements are:");
     for(j=0;j<n;j++){
         printf("%d",a[j]);
     }*/
    printf("The number to be inserted:");
    scanf("%d", &num);

    for (i = 0; i < n; i++)
    {
        if (num > a[i] && num < a[i + 1])
        {
            pos = i + 1;
            for (j = n; j >= pos; j--)
            {
                a[j] = a[j - 1];
                if (j == pos)
                {
                    a[pos] = num;
                }
            }
            break;
        }
    }
    printf("The new array is:");
    for (i = 0; i <= n; i++)
    {
        printf("%d", a[i]);
    }
}
