#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,h,sum;
    scanf("%d",&n);
    int m[n];
    for (int i=0 ;i<n; i++)
    {
        scanf("%d",&m[i]);

    }
    int height = m[0];

   for (int i=0 ;i<n; i++)
    {
        if (m[i]>=height)
        {
            height=m[i];
            
        }
    }

    for (int j=0; j<n; j++)
    {
        if (m[j]<=height)
        {
           sum=height-m[j];
        }
        printf("%d ",sum);
    }
   
    return 0;
}
