
#include <stdio.h>

int main()
{
    int val1=123, val2=456, rev2=0 ;
    while(val2>0){
        rev2=rev2*10 +(val2%10);
        val2=val2/10;
    }

    while(rev2>0){
        val1=val1*10 + (rev2%10);
        rev2=rev2/10;
    }
    printf("%d",val1);
 
    
    return 0;
}