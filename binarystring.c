#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d",&t);

    for (int i=0 ; i<t ; i++)
    {
        int n,count=0;
        scanf("%d",&n);
        char st[n];
        scanf("%s",&st);
        for (int j=0 ;j<strlen(st);j++)
        {
            if (st[j]=='0'&&st[j+1]=='1') count++;

            else if (st[j]=='1'&&st[j+1]=='0') count++;

        }
        printf("%d\n",count);
    }

    return 0;
}
