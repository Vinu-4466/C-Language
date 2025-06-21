
#include <stdio.h>

int main()
{
    int n;
    printf("enter a number n:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        if ((i&1)==0)
        {
            printf("%d is even",i);
        }
        else
        {
            printf("\n%d is odd",i);
        }
            
    }
    

    return 0;
}
