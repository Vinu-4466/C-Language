#include<string.h>
#include <stdio.h>

int main()
{
    char ch[100];
    printf("enter a string:");
    scanf("%s",ch);
    for(int i=strlen(ch)-1;i>=0;i--){
        printf("%c",ch[i]);
        
    }

    return 0;
}
