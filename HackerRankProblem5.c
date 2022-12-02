#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int value[n] ;
    char arr;

    for (int i=0; i<n ;i++)
    {
        scanf("%d %c",&value[i],&arr);
    }

    for (int i=0 ; i<n ; i++)
    {

        if (value[i] <=60)
        {
            int sum =(60-value[i] )+(20*2)+(20*3);
            printf("%d minutes\n",sum);

        }
        else if(value[i] <=80 && value[i]>60)
        {
            int sum=((80-value[i])*2)+(20*3);
            printf("%d minutes\n",sum);

        }
        else if (value [i]<=100 && value[i]>80)
        {
            int sum =((100- value [i])*3);
          printf("%d minutes\n",sum);

        }

    }
    return 0;

    }
