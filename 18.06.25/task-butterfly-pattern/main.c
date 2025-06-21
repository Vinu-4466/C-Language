
#include <stdio.h>

int main()
{
    int n=11;
    int i;
    int j;
    int s;
    int k;
    for(i=0;i<n;i++)
    {
        if(i<5){
        
        for(j=0;j<(i+1);j++)
        {
            printf("*");
        }
        
        
        for(s=0;s<n-((i*2)+2);s++)
        {
            printf(" ");
        }
    
       for(k=0;k<i+1;k++)
        {
            printf("*");
        }
        }
        
        
        else if (i==5)
        {
            for(j=0;j<n;j++)
            {
                printf("*");
            }
        }
        else 
        {
            for(j=0;j<(n-i-1);j++)
            {
                printf("*");
            }
        
            for(s=0;s<((i-6)*2)+3;s++)
            {
            printf(" ");
            }
            
            for(k=0;k<(n-i-1);k++)
           {
            printf("*");
           }
        }

     printf("\n");
     }    
      
    
    return 0;
}