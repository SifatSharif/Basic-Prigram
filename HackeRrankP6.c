#include <stdio.h>
int main()
{
       int n,cont=0;
      scanf("%d",&n);

      for (int i=2 ; i*i<=n ;i++)
      {
         if (n%i==0)
         {
            cont ++;
        
         }
      }  
      if (cont==0)
      {
        printf("Prime\n");
      }
    
        else printf("Not prime\n");
    
    return 0;
}