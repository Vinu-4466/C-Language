
#include <stdio.h>

int main()
{
    int n=5;
    int i;
    for (i=0;i<n;i++)
    {
        for(int s=0;s<(n-(i+1));s++)
        {
            printf(" ");
        }
        for(int j=0;j<((i*2)+1);j++)
        {
            printf("*");    
        }
        printf("\n");
    }

    return 0;
}