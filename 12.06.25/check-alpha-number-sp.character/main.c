#include<stdio.h>
int main()
{
    char val;
    printf("enter a value:");
    scanf("%c",&val);
    if ((val>='a' && val<='z') || (val>='A' && val<='Z'))
    {
       printf("Alphabet");
    }
    else if (val>='0' && val<='9'){
        printf("number");
        
    } 
       
    else
    {
       printf("special character");
    }
    return 0;
}