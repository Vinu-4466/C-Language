#include<string.h>
#include <stdio.h>

int main()
{
    char str[100];
    printf("enter a string:");
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++){
        printf("%c",str[i]);
        if(i!=strlen(str)-1)
        {
            printf(" ");
        }
    }
    return 0;
}