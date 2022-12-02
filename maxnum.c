#include <stdio.h>
int main()
{
    int i,j,n;
    scanf("%d", &n);

    if(n==1)
    {
        printf("%d", 1);
        return 0;
    }

    for (i = 1; i <= n; i++)
    {
        printf("%d", i);
    }
    printf("\n");
    for (i = 2; i <= n - 1; i++)
    {
        printf("%d",i);
        for (j = 2; j <= n - 1; j++)
        {
            printf(" ");
        }
        printf("%d\n",n);
    }
    for (i = 1; i <= n; i++)
    {
        printf("%d",n);
    }

    return 0;
}