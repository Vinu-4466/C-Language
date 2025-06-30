#include<string.h>
#include <stdio.h>

int main()
{
    char ch1[10],ch2[10];
    printf("enter ch1:");
    scanf("%s",ch1);
    printf("enter ch2:");
    scanf("%s",ch2);
    strcat(ch1,ch2);
    printf("merged string:%s",ch1);
    

    return 0;
}
