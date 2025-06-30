#include<string.h>
#include <stdio.h>

int main()
{
    char str[100],search;
    int found=0;
    printf("enter a string:");
    scanf("%s",str);
    printf("enter a letter:");
    scanf(" %c",&search);
    
    for(int i=0;i<strlen(str);i++){
        if(str[i]==search)
        {
             found=1;
            break;
        
        }
        
    }
    if(found){
        printf("found");
    }
    else{
        printf("not");
    }
    

    return 0;
}
