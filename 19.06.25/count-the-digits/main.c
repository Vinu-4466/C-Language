
#include <stdio.h>

int main()
{
    int n=1234, count=0;
    while(n>0){
        if(n%10!=0){
            count+=1;
        }
        n= n/10;
    }
    printf("%d",count);

    return 0;
}