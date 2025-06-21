
#include <stdio.h>

int main()
{
    char word[] = "AbCdE";
    int i=0;
    printf("%s\n",word);
    while (word[i] != '\0')
    {
        if (word[i] >= 'a' && word[i]<='z')
        {
            word[i]=word[i]-32;
        }
        else if  (word[i]>='A' && word[i]<='Z')
        {
            word[i]=word[i]+32;
        }
        i++;   
        
       

    }
    
    printf("%s",word);
    return 0;
}