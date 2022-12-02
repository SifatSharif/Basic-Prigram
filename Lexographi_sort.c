#include <stdio.h>
#include <string.h>
int main ()
{
    char s[102],st[102];
    fgets(s,sizeof(s),stdin);

    fgets(st,sizeof(st),stdin);

    int len = strlen(s)-1;
    for (int i=0 ; i<len; i++)
    {
        if (s[i]>= 'A' && s[i]<='Z')  s[i]+=32;

        if (st[i]>= 'A' && st[i]<='Z')
        {
            st[i]+=32;
        }
    }
    for (int i=0; i<len ; i++)
    {
        if (st[i]>s[i])
        {
            printf("1.%s\n2.%s\n",s,st);
        return 0;
        }
        else if (s[i]>st[i])
        {
            printf("1.%s\n2.%s\n",st,s);
            return 0;
        }
    }
    


    return 0;
}