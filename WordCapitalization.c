#include<stdio.h>
#include<string.h>
int main ()
{
    char ch[1000];
    scanf("%s",ch);

    if (ch[0]>= 'a' &&ch[0]<= 'z')
    {
        ch[0]-=32;
        printf("%s\n",ch);
    }
    else
    printf("%s\n",ch);



}