#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n,t;
   scanf("%d",&t);

    for (int i=0; i<t ;i++)
    {
        scanf("%d",&n);
        int arr[6];

        for(int j=0; j<n;j++)
        {
            scanf("%d",&arr[j]);
        }
        int count=0;
        for(int j=0; j<n;j++)
        {
            for (int i=0 ; i<arr[j] ; i++)
            {
        
            if (i*i==arr[j]||arr[j]==1)
            {
                count++;
            }

            }
            
        }
        if (count==0)
        printf("-1\n");
         else printf("%d\n",count);

    }
    return 0;
}
