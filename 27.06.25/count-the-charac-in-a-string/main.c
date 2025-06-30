#include<string.h>
#include <stdio.h>

int main()
{
    char str[100];
    int count=0;
    printf("enter a string:");
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++){
        count++;
    }
    printf("%d",count);

    return 0;
}
