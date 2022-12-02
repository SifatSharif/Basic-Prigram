#include<stdio.h>
int main ()
{
    int s,a,b,c,t;

    scanf("%d",&t);
    for (int i=1; i<=t;i++)
    {
        scanf("%d %d %d %d",&s, &a, &b,&c);
        int d= s-(a+b+c);
        printf("%d\n",d);
    }

return 0;
}