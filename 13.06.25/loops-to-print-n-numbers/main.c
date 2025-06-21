
#include <stdio.h>

int main()
{
    int n;
    printf("enter a number n:");
    scanf("%d",&n);
       for(int i=1;i<=n;i++)
       {
        printf("%d",i);
    }
    int i=1;
    while(i<=n){
        
        printf("%d\n",i);
        i++;
    }
    i=1;
    do{
        printf("%d",i);
         i++;
       
    }while(i<=n);


   
    
    
    
    return 0;
}
