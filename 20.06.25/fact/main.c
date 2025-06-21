
#include <stdio.h>

int main()
{
    int num, n,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    while(n>0){
         int pro=1;
    
        num = n%10;
        for(int i=num;i>0;i--){
            pro*=i;
        }
        sum=sum + pro;
        n= n/10;
       
            
        }
        printf("%d",sum);
    
    
    
    return 0;
}