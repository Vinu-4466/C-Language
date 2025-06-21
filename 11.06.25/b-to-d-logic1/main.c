
#include <stdio.h>
int main()
{
    int num=1011;
    int i=0;
    int sum=0;
    while(num>0)
    {
        sum= sum +((num%10)*(1<<i ));
        i++;
        num=num/10;
    }
    printf("%d",sum);
      
    return 0;
}
