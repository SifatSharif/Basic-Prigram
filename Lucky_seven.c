#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int k=0; k<t; k++)
    {
        int flag=0;
        char str[20],new_str[20];
        scanf("%s",str);
        int l = strlen(str);
        for(int i=0,j=l-1; i<l; i++,j--)
        {
            new_str[i] = str[j];
        }
        for(int i=0; i<l; i++)
        {
            if(new_str[i] != str[i])
            {
                flag++;
            }
        }

        if(flag == 0 && l<=7)
        {
            printf("Case #3: %s\n",str);
        }
        else if(flag == 0 && l>7)
        {
            printf("Case #2: %c%d%c\n",str[0],l-2,str[l-1]);
        }

        else
        {
            printf("Case #1: Not Palindrome\n");
        }
    }


}