
#include <stdio.h>

int main()
{
    char letter;
    printf("enter a letter:");
    scanf("%c",&letter);
    if ((letter>='a') && (letter<='z') || (letter>='A') && (letter<='Z'))
    {
    printf("ALPHABET");
    }
    else
    {
        printf("not an alphabet");
    }

    return 0;
}
