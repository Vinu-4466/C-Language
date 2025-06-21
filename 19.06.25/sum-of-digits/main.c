
#include <stdio.h>

int main()
{
    int n=1234, sum=0;
    while(n>0){
       sum= sum+(n%10);
       n=n/10;
    }
    printf("%d",sum);

    return 0;
}