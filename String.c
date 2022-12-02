#include <stdio.h>

int main ()
{
    char st[100];
    fgets(st,sizeof(st),stdin);
    int i,counter=0;
    
    while (st[i]!='\0')
    {
        if (st[i]=='a' ||st[i]=='e'||st[i]=='i' ||st[i]=='o' || st[i]=='u')
        counter++;
        i++;
    }

    printf("%d",counter);
    
}