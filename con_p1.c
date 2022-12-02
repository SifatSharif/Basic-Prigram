#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t,n,count1=0,count2=0;
    scanf ("%d",&t);
    for (int i=0 ; i<t; i++)
    {
        scanf("%d",&n);
        char ch [n-1];
        scanf("%s",ch);

        for(int j =0; j<n ;j++)
        {
            if (ch[j]=='T'||ch[j]=='t') count1++;
            else if (ch[j]=='H'||ch[j]=='h') count2++;
        }

        if (count1>count2)printf("Pakistan\n");
        else if (count1<count2) printf("England\n");
         
    }
    return 0;
}
