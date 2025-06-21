#include <stdio.h>
int main() 
{
    int num1, num2, num3;
    printf("enter a number:");
    scanf("%d", &num1);
    printf("enter a number:");
    scanf("%d", &num2);
    printf("enter a number:");
    scanf("%d", &num3);
    if (num1>num2 && num1>num3)
    printf("%d is greater",num1);
    else if (num2>num1 && num2>num3)
    printf("%d is greater",num2);
    else
    printf("%d is greater",num3);
        return 0;
}
