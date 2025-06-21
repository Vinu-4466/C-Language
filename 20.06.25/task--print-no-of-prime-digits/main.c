
#include <stdio.h>

int main()
{
    int n ,count,num;
    printf("enter a number:");
    scanf("%d",&n);
    while(n>0){
        
        num=n%10;
        count =0;
        for(int i=1;i<=num;i++)
        {
            if(num%i==0){
                count++;
            }
        } 
        n=n/10;
        if(count==2){
            printf("%d",num);
        }
       
    }
    
    return 0;
}
