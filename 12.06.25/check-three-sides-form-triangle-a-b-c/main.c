#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a number(a):");
    scanf("%d",&a);
    printf("enter a number(b):");
    scanf("%d",&b);
    printf("enter a number(c):");
    scanf("%d",&c);
    if(a==b==c)
    {
    printf("eq.triangle is possible");
    }
    else if (a+b > c)
    {printf("triangle is possible");
    }
    else
    {printf("triange is not possible");
    }
    
    

    return 0;
}
