#include<string.h>
#include <stdio.h>

int main()
{
    char str[]="saravanan";
    int arr[26]={0};
    for(int i=0;i<strlen(str);i++){ 
        arr[str[i]-'a']+=1;
    }
    for(int i=0;i<26;i++){
        if(arr[i]>0)
        printf("%c %d\n",i+97,arr[i]);
    }

    return 0;
}
