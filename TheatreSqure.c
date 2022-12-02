#include <stdio.h>
int main ()
{
    long long  n ,m ,s,x,y;
    scanf("%lld %lld %lld",&n,&m,&s);

    if (n%s==0)
    {
        x=n/s;
    }
    else
     {x= (n/s)+1;}

    if (m%s==0)
    {
        y=m/s;
    }
    else
    {
        y=(m/s)+1;
    }
 
    printf("%lld\n",(x*y));
}