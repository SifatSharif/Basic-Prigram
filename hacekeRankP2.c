#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,k;
    int cont=0;
    scanf("%d %d",&n,&k);
    int ar[n];
    for (int i=0; i<n;i++)
    {
        scanf("%d",&ar[i]);
        
    }
    for (int i=0; i<n;i++)
    {
        if (ar[i]<k)
        {
            cont++;
        }
    }

    printf("%d\n",cont);
    return 0;
}
