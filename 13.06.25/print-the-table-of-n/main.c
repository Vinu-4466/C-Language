
#include <stdio.h>

int main()
{
    int n;
    printf("enter a number n:");
    scanf("%d",&n);
    for(int i=n;i<=n*10;i+=n)
    {
        printf("%d\n",i);
    }

    return 0;
}
