
#include <stdio.h>

int main()
{
    int a=1,b=2,c=3;
    int d= ((a>b) && (a>c))? printf("a is greater"):((b>a) && (b>c))?printf("b is greater"):printf("c is greater");
    printf("%d",d);

    
    
    

    return 0;
}
