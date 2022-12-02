#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

      int n,count=1,max=1;
        scanf("%d",&n);
        char st[101];
        scanf("%s",&st);
        for (int j=0 ;j<n;j++)
        {
            if (st[j]==st[j+1]) count++;

            else
            {
                if (count>max)
                {
                    max=count;
                }
                count=1;
            }
        

        }
     printf("%d\n",max);
    return 0;
}
