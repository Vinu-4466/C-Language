
#include <stdio.h>

int main()
{
    int n=4;
    int i;
    int j;
    for(i=0;i<=3;i++)
    {
          for(j=0;j<=3;j++)
          {
           if (i==0 || i==3 || j==0 || j==3 )
           {
               printf("*");
           }
          else
           {
               printf(" ");
           }
        
          }
          printf("\n");
    }
    
    
    return 0;
}